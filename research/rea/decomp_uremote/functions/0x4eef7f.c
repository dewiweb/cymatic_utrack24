// rea decompile_all
// name: FUN_004eef7f
// address: 0x4eef7f
// body: available
// range: 0x4eef7f-0x4ef06b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eef7f(void)

{
  char cVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined1 auStack_2c [3];
  char local_29;
  undefined1 auStack_18 [20];
  
  cVar1 = FUN_004ef4f4();
  if (cVar1 == '\0') {
    cVar1 = FUN_004ef621();
    if (cVar1 == '\0') {
      cVar1 = FUN_004efb18();
      local_29 = '\0';
      if (cVar1 == '\0') goto LAB_004eefb4;
    }
  }
  local_29 = '\x01';
LAB_004eefb4:
  if ((int *)in_ECX[0x1f] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x1f] + 0x28))(local_29 == '\0');
    (**(code **)(*in_ECX + 0xb8))(auStack_2c);
    FUN_004d0b7d();
    FUN_004c0be5(in_ECX[7]);
    FUN_004c0689();
  }
  if ((int *)in_ECX[0x1e] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x1e] + 0x28))(local_29 == '\0');
    FUN_004c09cc(in_ECX[6] + -0x12,in_ECX[7] + -0x12,0x12);
  }
  cVar1 = FUN_004f5fe9(0);
  if (cVar1 != '\0') {
    if (in_ECX[0x20] == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(in_ECX[0x20] + 8);
    }
    uVar2 = (**(code **)(*in_ECX + 0xbc))(auStack_18);
    FUN_004c0ccc(uVar3,uVar2);
  }
  FUN_004ef652(in_ECX);
  return;
}

