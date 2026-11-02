// rea decompile_all
// name: FUN_0052cd40
// address: 0x52cd40
// body: available
// range: 0x52cd40-0x52ced2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052cd40(int param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint local_1c;
  int local_18;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar6 = FUN_0052e670();
  if ((*(char *)(param_1 + 0x2d) != '\0') || (*(char *)(in_ECX + 8) != '\0')) {
    *(undefined4 *)(in_ECX + 0x30) = 0;
    *(undefined4 *)(in_ECX + 0x34) = 0;
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  uVar3 = uVar1 - (uint)uVar6;
  iVar4 = (iVar2 - (int)((ulonglong)uVar6 >> 0x20)) - (uint)(uVar1 < (uint)uVar6);
  local_1c = uVar3 - *(uint *)(in_ECX + 0x30);
  local_18 = (iVar4 - *(int *)(in_ECX + 0x34)) - (uint)(uVar3 < *(uint *)(in_ECX + 0x30));
  if ((local_18 < 1) && (local_18 < 0)) {
    bVar5 = local_1c != 0;
    local_1c = -local_1c;
    local_18 = -(local_18 + (uint)bVar5);
  }
  if (*(int *)(in_ECX + 0x30) == 0 && *(int *)(in_ECX + 0x34) == 0) {
    *(uint *)(in_ECX + 0x30) = uVar3;
    *(int *)(in_ECX + 0x34) = iVar4;
  }
  else if ((local_18 < 0) || ((local_18 < 1 && (local_1c < 0x1f5)))) {
    __allmul(*(undefined4 *)(in_ECX + 0x30),*(undefined4 *)(in_ECX + 0x34),3,0);
    uVar7 = __allshr();
    *(undefined8 *)(in_ECX + 0x30) = uVar7;
  }
  else {
    uVar7 = __allshr();
    *(undefined8 *)(in_ECX + 0x30) = uVar7;
  }
  *(undefined8 *)(in_ECX + 0x18) = uVar6;
  *(uint *)(in_ECX + 0x20) = uVar1;
  *(int *)(in_ECX + 0x24) = iVar2;
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 0x28);
  *(undefined1 *)(in_ECX + 8) = *(undefined1 *)(param_1 + 0x2c);
  if (*(char *)(param_1 + 0x2d) != '\0') {
    FUN_0050bff0();
  }
  return;
}

