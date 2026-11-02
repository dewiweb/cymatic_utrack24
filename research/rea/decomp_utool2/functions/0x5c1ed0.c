// rea decompile_all
// name: FUN_005c1ed0
// address: 0x5c1ed0
// body: available
// range: 0x5c1ed0-0x5c1f7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_005c1ed0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined8 param_9,char param_10)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int *in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071a656;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)in_ECX + 0x3d));
  iVar4 = 0;
  local_8 = 0;
  if (0 < in_ECX[0xe]) {
    do {
      piVar3 = *(int **)(in_ECX[0xc] + iVar4 * 4);
      cVar1 = (**(code **)(*piVar3 + 4))(uVar2);
      if (cVar1 == '\0') goto LAB_005c1f5d;
      iVar4 = iVar4 + 1;
    } while (iVar4 < in_ECX[0xe]);
  }
  if (param_10 == '\0') {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(**(code **)(*in_ECX + 0x3c))
                              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_9);
  }
LAB_005c1f5d:
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)in_ECX + 0x3d));
  ExceptionList = local_10;
  return piVar3;
}

