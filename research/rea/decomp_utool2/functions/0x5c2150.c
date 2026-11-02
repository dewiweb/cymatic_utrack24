// rea decompile_all
// name: FUN_005c2150
// address: 0x5c2150
// body: available
// range: 0x5c2150-0x5c2207 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c2150(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071a6aa;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x3d));
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x38);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(in_ECX + 0x30) + iVar1 * 4);
    local_8._1_3_ = (uint3)((uint)local_8 >> 8);
    local_8._0_1_ = 1;
    cVar4 = (**(code **)(*piVar2 + 4))(uVar5);
    if ((cVar4 == '\0') || ((short)piVar2[4] != (short)param_1)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    if (bVar3) {
      piVar2[4] = param_1;
      piVar2[5] = param_2;
      piVar2[6] = param_3;
      piVar2[7] = param_4;
      piVar2[8] = param_5;
      piVar2[9] = param_6;
      piVar2[10] = param_7;
      piVar2[0xb] = param_8;
      piVar2[0xc] = param_9;
      piVar2[0xd] = param_10;
      (**(code **)(*piVar2 + 0xc))(1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x3d));
  ExceptionList = local_10;
  return;
}

