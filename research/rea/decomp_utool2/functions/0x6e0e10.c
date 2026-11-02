// rea decompile_all
// name: FUN_006e0e10
// address: 0x6e0e10
// body: available
// range: 0x6e0e10-0x6e0f4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e0e10(char param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  int *in_ECX;
  char cStack00000007;
  undefined1 auStack_44 [8];
  undefined4 uStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  uint uStack_30;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007281c8;
  local_10 = ExceptionList;
  uStack_30 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (in_ECX[0x28] == 0) {
    return;
  }
  puStack_38 = (undefined4 *)0x6e0e50;
  ExceptionList = &local_10;
  puVar5 = (undefined4 *)FUN_0040de70();
  if (puVar5 != (undefined4 *)0x0) {
    LOCK();
    puVar5[1] = puVar5[1] + 1;
    UNLOCK();
  }
  puVar3 = (undefined4 *)in_ECX[0x28];
  in_ECX[0x28] = 0;
  local_8 = 1;
  puStack_38 = (undefined4 *)0x6e0e86;
  puStack_34 = puVar3;
  (**(code **)(*in_ECX + 0xc0))();
  if (param_1 == '\0') {
    uStack_3c = 0x6e0e94;
    puStack_38 = puVar3;
    cVar4 = FUN_0069a000();
    cStack00000007 = '\x01';
    if (cVar4 != '\0') goto LAB_006e0ea0;
  }
  cStack00000007 = '\0';
LAB_006e0ea0:
  local_14 = puVar3;
  if ((puVar3 != (undefined4 *)0x0) && (local_14 = (undefined4 *)0x0, puVar3 != (undefined4 *)0x0))
  {
    puStack_38 = (undefined4 *)0x1;
    uStack_3c = 0x6e0eb5;
    (**(code **)*puVar3)();
  }
  FUN_006e6400(auStack_44);
  FUN_006ce9f0(1);
  if ((cStack00000007 != '\0') && (*(code **)(*in_ECX + 0xb4) != FUN_006e24b0)) {
    puStack_38 = (undefined4 *)0x6e0ee2;
    (**(code **)(*in_ECX + 0xb4))();
  }
  if ((puVar5 != (undefined4 *)0x0) && (puVar5[2] != 0)) {
    puStack_38 = (undefined4 *)0x0;
    uStack_3c = 0x6e0ef6;
    FUN_006e8fd0();
  }
  if (((cStack00000007 != '\0') && (puVar5 != (undefined4 *)0x0)) && (puVar5[2] != 0)) {
    puStack_38 = (undefined4 *)0x6e0f11;
    FUN_00699ef0();
  }
  if (local_14 != (undefined4 *)0x0) {
    puStack_38 = (undefined4 *)0x1;
    uStack_3c = 0x6e0f20;
    (**(code **)*local_14)();
  }
  if (puVar5 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar5 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      puStack_38 = (undefined4 *)0x1;
      uStack_3c = 0x6e0f37;
      (**(code **)*puVar5)();
    }
  }
  ExceptionList = local_10;
  return;
}

