// rea decompile_all
// name: FUN_004df650
// address: 0x4df650
// body: available
// range: 0x4df650-0x4df820 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004df650(undefined4 param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_2c;
  void *pvStack_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005e1784;
  local_14 = ExceptionList;
  uVar3 = DAT_00955fd4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_14;
  if ((*(int *)(in_ECX + 0xb0) < 0) && (*(int *)(in_ECX + 0xac) < 0)) {
    cVar2 = FUN_004c321c(in_ECX,0);
    local_2c = 0;
    if (cVar2 == '\0') goto LAB_004df6a5;
  }
  local_2c = 1;
LAB_004df6a5:
  iVar4 = thunk_FUN_004c1d58(uVar3);
  iVar6 = in_ECX;
  (**(code **)(*(int *)(iVar4 + 0x20) + 0x20))
            (param_1,*(undefined4 *)(in_ECX + 0x18),*(undefined4 *)(in_ECX + 0x1c),local_2c);
  if ((*(int *)(in_ECX + 0x88) != 0) && (uVar3 = 0, 0 < *(int *)(in_ECX + 0x94))) {
    do {
      FUN_0047dafe();
      FUN_0047cd64(0);
      if (uVar3 + 1 < *(uint *)(in_ECX + 0xa0)) {
        iVar4 = *(int *)(*(int *)(in_ECX + 0x98) + 4 + uVar3 * 4);
      }
      else {
        iVar4 = 0;
      }
      if (uVar3 < *(uint *)(in_ECX + 0xa0)) {
        iVar8 = *(int *)(*(int *)(in_ECX + 0x98) + uVar3 * 4);
      }
      else {
        iVar8 = 0;
      }
      FUN_0047ccbf(0,iVar4 - iVar8,*(undefined4 *)(in_ECX + 0x1c));
      iVar4 = thunk_FUN_004c1d58();
      if (uVar3 < *(uint *)(in_ECX + 0xa0)) {
        iVar8 = *(int *)(*(int *)(in_ECX + 0x98) + uVar3 * 4);
      }
      else {
        iVar8 = 0;
      }
      uVar1 = uVar3 + 1;
      if (uVar1 < *(uint *)(in_ECX + 0xa0)) {
        iVar7 = *(int *)(*(int *)(in_ECX + 0x98) + 4 + uVar3 * 4);
      }
      else {
        iVar7 = 0;
      }
      iVar4 = *(int *)(iVar4 + 0x20);
      uVar5 = FUN_00467165(uVar3 == *(uint *)(in_ECX + 0xac),uVar3 == *(uint *)(in_ECX + 0xb0),iVar6
                          );
      (**(code **)(iVar4 + 0x30))(param_1,iVar7 - iVar8,*(undefined4 *)(in_ECX + 0x1c),uVar3,uVar5);
      FUN_0047db0c();
      uVar3 = uVar1;
    } while ((int)uVar1 < *(int *)(in_ECX + 0x94));
  }
  ExceptionList = pvStack_28;
  return;
}

