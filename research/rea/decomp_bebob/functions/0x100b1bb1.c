// rea decompile_all
// name: CMFCShadowRenderer::Create
// address: 0x100b1bb1
// body: available
// range: 0x100b1bb1-0x100b1ce2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCShadowRenderer::Create(int,unsigned long,int,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCShadowRenderer::Create
          (CMFCShadowRenderer *this,int param_1,ulong param_2,int param_3,int param_4)

{
  int iVar1;
  HBITMAP__ *ho;
  uint uVar2;
  int iVar3;
  
  (**(code **)(*(int *)this + 0x28))();
  ho = FUN_1009cc23(param_1,param_2,(double *)param_3,param_4);
  uVar2 = 0;
  if (ho != (HBITMAP__ *)0x0) {
    iVar3 = 3;
    if (2 < param_1) {
      iVar3 = param_1;
    }
    iVar1 = iVar3 * 2 + 1;
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x11c) = 0;
    *(int *)(this + 0x120) = iVar1;
    *(int *)(this + 0x124) = iVar1;
    *(int *)(this + 0x128) = iVar3;
    *(int *)(this + 300) = iVar3;
    *(int *)(this + 0x130) = iVar3;
    *(int *)(this + 0x134) = iVar3;
    *(int *)(this + 0x138) = iVar3;
    *(int *)(this + 0x13c) = iVar3;
    *(int *)(this + 0x140) = iVar3;
    *(int *)(this + 0x144) = iVar3;
    *(undefined4 *)(this + 0x148) = 0;
    *(undefined4 *)(this + 0x14c) = 0;
    *(int *)(this + 0x150) = *(int *)(this + 0x120) - *(int *)(this + 0x118);
    *(int *)(this + 0x154) = *(int *)(this + 0x124) - *(int *)(this + 0x11c);
    *(int *)(this + 0x14c) = *(int *)(this + 0x14c) + *(int *)(this + 300);
    *(int *)(this + 0x150) = *(int *)(this + 0x150) - *(int *)(this + 0x130);
    *(int *)(this + 0x148) = *(int *)(this + 0x148) + *(int *)(this + 0x128);
    *(int *)(this + 0x154) = *(int *)(this + 0x154) - *(int *)(this + 0x134);
    *(int *)(this + 0x54) = *(int *)(this + 0x120) - *(int *)(this + 0x118);
    *(int *)(this + 0x58) = *(int *)(this + 0x124) - *(int *)(this + 0x11c);
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined4 *)(this + 0x3c) = *(undefined4 *)(this + 0x15c);
    CMFCToolBarImages::AddImage((CMFCToolBarImages *)(this + 4),ho,1);
    DeleteObject(ho);
    uVar2 = (uint)(*(int *)(this + 8) == 1);
  }
  return uVar2;
}

