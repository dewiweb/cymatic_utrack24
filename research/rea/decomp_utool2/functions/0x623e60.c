// rea decompile_all
// name: FUN_00623e60
// address: 0x623e60
// body: available
// range: 0x623e60-0x623f15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00623e60(int param_1,char *param_2,undefined4 param_3,LPCRITICAL_SECTION param_4)

{
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 in_ECX;
  int in_EDX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0071d4fb;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = 0;
  if (0 < param_1) {
    while( true ) {
      BVar2 = TryEnterCriticalSection(param_4);
      if (BVar2 == 0) break;
      iVar3 = Ordinal_16(in_ECX,in_EDX + iVar4,param_1 - iVar4,0,uVar1);
      LeaveCriticalSection(param_4);
      if ((iVar3 < 1) || (*param_2 == '\0')) break;
      iVar4 = iVar4 + iVar3;
      if (param_1 <= iVar4) {
        ExceptionList = local_10;
        return iVar4;
      }
    }
    if (iVar4 == 0) {
      iVar4 = -1;
    }
  }
  ExceptionList = local_10;
  return iVar4;
}

