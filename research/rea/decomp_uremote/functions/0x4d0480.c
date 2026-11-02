// rea decompile_all
// name: FUN_004d0480
// address: 0x4d0480
// body: available
// range: 0x4d0480-0x4d057e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d0480(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *in_ECX;
  undefined4 uVar6;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de056;
  local_14 = ExceptionList;
  uVar4 = DAT_00955fd4 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_14;
  cVar3 = FUN_004f5fe9(0);
  if (cVar3 == '\0') {
    ExceptionList = local_14;
    return;
  }
  piVar1 = in_ECX + 6;
  if ((char)*piVar1 != '\0') {
    ExceptionList = local_14;
    return;
  }
  iVar2 = *piVar1;
  *(char *)piVar1 = '\x01';
  local_c = 0;
  iVar5 = FUN_004c0453(uVar4);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + 0x2c);
  }
  if (iVar5 != in_ECX[2]) {
    (**(code **)(*in_ECX + 0x24))();
    cVar3 = FUN_004f5fce(0);
    if (cVar3 != '\0') goto LAB_004d0564;
    in_ECX[2] = iVar5;
  }
  FUN_004d074e();
  FUN_004d070d();
  iVar5 = in_ECX[1];
  if (iVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(iVar5 + 8);
  }
  (**(code **)(*in_ECX + 4))(uVar6,1,1);
  cVar3 = FUN_004f5fe9(0);
  if (cVar3 != '\0') {
    iVar5 = in_ECX[1];
    if (iVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(iVar5 + 8);
    }
    (**(code **)(*in_ECX + 0xc))(uVar6);
  }
LAB_004d0564:
  *(char *)piVar1 = (char)iVar2;
  ExceptionList = local_14;
  return;
}

