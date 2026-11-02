// rea decompile_all
// name: FUN_00445a01
// address: 0x445a01
// body: available
// range: 0x445a01-0x445ade inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00445a01(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  undefined4 extraout_ECX;
  int local_1c;
  undefined1 local_18 [20];
  
  uVar1 = FUN_00439b5a(*(int *)(in_ECX + 0x18) / 0x19);
  *(undefined4 *)(in_ECX + 0x124) = uVar1;
  FUN_004c2047(local_18);
  FUN_004c0c1f();
  iVar2 = FUN_0044bfc5();
  if (*(char *)(iVar2 + 0x54) == '\0') {
    uVar1 = 0x3f800000;
  }
  else {
    uVar1 = 0x3f4ccccd;
  }
  FUN_004c15a5(uVar1);
  iVar2 = *(int *)(in_ECX + 0x18) + *(int *)(in_ECX + 0x124) * -2;
  uVar1 = FUN_0044bfc5(extraout_ECX,iVar2);
  local_1c = FUN_0044d25c(uVar1,iVar2);
  if (local_1c == 0) {
    local_1c = 1;
  }
  FUN_00445620((float)local_1c);
  FUN_004c09cc(*(undefined4 *)(in_ECX + 0x124),0,*(undefined4 *)(in_ECX + 0x1c));
  FUN_00440ef3(*(int *)(in_ECX + 0x180) / local_1c);
  FUN_00440e9b();
  return;
}

