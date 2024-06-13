using ROOT

println("Creating a ROOT file with a TTree filled with arrays.\n")

f = ROOT.TFile!Open("test2.root", "RECREATE")
tree = ROOT.TTree("tree", "tree")

const maxMuons = 10

nMuon    = Ref{Int32}(0)
Muon_pt  = Vector{Float32}(undef, maxMuons)
Muon_eta = Vector{Float32}(undef, maxMuons)
Muon_phi = Vector{Float32}(undef, maxMuons)

Branch(tree, "nMuon", nMuon, 32000, 99)
Branch(tree, "Muon_pt[nMuon]", Muon_pt, 32000, 99)
Branch(tree, "Muon_eta[nMuon]", Muon_eta, 32000, 99)
Branch(tree, "Muon_phi[nMuon]", Muon_phi, 32000, 99)

nevts = 10

for i in 1:nevts
    nMuon[] = rand(1:10)
    Muon_pt[1:nMuon[]] .= 100 .* rand(Float32, nMuon[])
    Muon_eta[1:nMuon[]] .= 5 .- 10 .* rand(Float32, nMuon[])
    Muon_phi[1:nMuon[]] .= 2π * rand(Float32, nMuon[])

    println("Fill tree with an event containing ", nMuon[], " muons.")
    
    #Note: we expect the use of global variables to hold the references to
    #nMuon, Muon_pt, etc.  ensures that the pointer are kept valid.    
    #For local variables, use GC.@preserve:
    #  GC.@preserve nMuon Muon_pt Muon_eta Muon_phi Muon_mass Fill(tree)
    Fill(tree)
end

println()

Write(tree)
Close(f)
