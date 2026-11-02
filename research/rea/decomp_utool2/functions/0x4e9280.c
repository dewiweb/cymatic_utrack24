// rea decompile_all
// name: FUN_004e9280
// address: 0x4e9280
// body: available
// range: 0x4e9280-0x4e9382 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e9280(uint param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined **ppuVar4;
  undefined1 auStack_4c [8];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00704bf8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_38 = 0x4e92b0;
  operator_new(0x28);
  uStack_38 = 0x4e92c4;
  puVar3 = (undefined4 *)FUN_00468a40();
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    puVar3[1] = puVar3[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  if (*(char *)(param_2 + 2) != '\0') {
    *(undefined1 *)(param_2 + 2) = 0;
    (**(code **)(*(int *)*param_2 + 0x34))();
  }
  uStack_38 = 0x4e92f5;
  (**(code **)(*(int *)*param_2 + 0x68))();
  local_8 = 0xffffffff;
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      uStack_38 = 1;
      uStack_3c = 0x4e9319;
      (**(code **)*puVar3)();
    }
  }
  uStack_38 = DAT_00c7ef94;
  uStack_3c = 0x4e932a;
  FUN_00684c50();
  if (param_1 < *(uint *)(in_ECX + 0x7c)) {
    ppuVar4 = (undefined **)(*(int *)(in_ECX + 0x74) + param_1 * 4);
  }
  else {
    ppuVar4 = &PTR_DAT_00c7ed68;
  }
  uStack_38 = param_4;
  uStack_3c = param_3;
  uStack_40 = 0;
  uStack_44 = 0x4e9351;
  FUN_00472d90();
  uStack_38 = 1;
  uStack_3c = 0x21;
  FUN_0040e4d0(auStack_4c);
  FUN_006830c0(ppuVar4);
  ExceptionList = local_10;
  return;
}

