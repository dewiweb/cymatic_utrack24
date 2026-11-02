// rea decompile_all
// name: CMFCShadowRenderer::Draw
// address: 0x100b1ce3
// body: available
// range: 0x100b1ce3-0x100b1d7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCShadowRenderer::Draw(class CDC *,class CRect,unsigned
   int,unsigned char)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCShadowRenderer::Draw
          (CMFCShadowRenderer *this,undefined4 param_1,int param_3,undefined4 param_4,int param_5,
          int param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int local_14;
  int local_c;
  
  if (DAT_10168920 == 0) {
    local_c = param_5 - *(int *)(this + 0x140);
    local_14 = local_c - *(int *)(this + 0x140);
  }
  else {
    local_14 = param_3 + *(int *)(this + 0x138);
    local_c = *(int *)(this + 0x138) + local_14;
  }
  iVar1 = param_6 - *(int *)(this + 0x144);
  (**(code **)(*(int *)this + 0x1c))
            (param_1,local_14,iVar1 - *(int *)(this + 0x144),local_c,iVar1,param_7,param_8);
  (**(code **)(*(int *)this + 0x14))(param_1,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

