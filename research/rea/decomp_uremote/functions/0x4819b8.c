// rea decompile_all
// name: FUN_004819b8
// address: 0x4819b8
// body: available
// range: 0x4819b8-0x481a80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004819b8(void)

{
  ushort uVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int *in_ECX;
  int *local_c;
  int local_8;
  
  iVar2 = in_ECX[in_EAX + 0x12];
  if (iVar2 == 0) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x34;
    *(int *)(*in_ECX + 0x18) = in_EAX;
    (**(code **)*in_ECX)();
  }
  iVar3 = 0;
  local_8 = 0;
  do {
    if (0xff < *(ushort *)(iVar2 + iVar3 * 2)) {
      local_8 = 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x40);
  if (*(char *)(iVar2 + 0x80) == '\0') {
    FUN_00481979(0xdb);
    FUN_00481993();
    FUN_0048194e(local_8 * 0x10 + in_EAX);
    local_c = &DAT_005ff498;
    do {
      uVar1 = *(ushort *)(iVar2 + *local_c * 2);
      if (local_8 != 0) {
        FUN_0048194e(uVar1 >> 8);
      }
      FUN_0048194e(uVar1 & 0xff);
      local_c = local_c + 1;
    } while ((int)local_c < 0x5ff598);
    *(undefined1 *)(iVar2 + 0x80) = 1;
  }
  return local_8;
}

