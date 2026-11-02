// rea decompile_all
// name: FUN_100ba72c
// address: 0x100ba72c
// body: available
// range: 0x100ba72c-0x100ba8b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100ba72c(int *param_1)

{
  double dVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar3;
  int local_1c;
  int local_18;
  int local_14 [3];
  int local_8;
  
  FUN_100dcbe2(param_1);
  iVar2 = (**(code **)(*param_1 + 0x1ac))();
  if (iVar2 != 0) {
    param_1[0x4c] = 1;
    return;
  }
  param_1[0x4c] = 0;
  if (param_1[0x1a] != 0) {
    return;
  }
  if (param_1[0x19] != 0) {
    return;
  }
  (**(code **)(*param_1 + 0x70))(local_14 + 2,0);
  (**(code **)(*param_1 + 0x70))(&local_1c,1);
  if ((param_1[0x17] == 0) && (param_1[0x18] == 0)) {
    local_18 = 0;
    if (param_1[0x3f] != 0) {
      dVar1 = 1.0;
      iVar2 = 0x20;
      local_14[0] = 0x20;
      if (DAT_10166c84 != 0) {
        dVar1 = _DAT_10166c7c;
      }
      if (dVar1 != 1.0) {
        uVar3 = FUN_100f8660(0x20,extraout_EDX);
        local_14[0] = (int)uVar3;
        uVar3 = FUN_100f8660(extraout_ECX,(int)(uVar3 >> 0x20));
        iVar2 = (int)uVar3;
      }
      if ((param_1[8] - param_1[6] < local_14[0]) || (param_1[9] - param_1[7] < iVar2)) {
        local_18 = 1;
      }
      else {
        local_18 = 0;
      }
    }
    if ((local_14[2] == 0) && (local_8 == 0)) goto LAB_100ba870;
  }
  else {
    param_1[0x4c] = 0;
    if (((local_14[2] == 0) && (local_8 == 0)) || (local_1c != 0)) goto LAB_100ba870;
  }
  if (local_18 == 0) {
    param_1[0x4c] = 1;
  }
LAB_100ba870:
  if (param_1[0x4c] == 0) {
    iVar2 = CSize::operator==((CSize *)(param_1 + 0x2f),(tagSIZE)0x100000005);
    if (iVar2 == 0) {
      return;
    }
    local_14[0] = 3;
    local_14[1] = 3;
  }
  else {
    local_14[0] = 5;
    local_14[1] = 1;
  }
  (**(code **)(*param_1 + 0x1d8))(local_14);
  return;
}

