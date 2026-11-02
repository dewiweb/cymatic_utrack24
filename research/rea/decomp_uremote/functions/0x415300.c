// rea decompile_all
// name: FUN_00415300
// address: 0x415300
// body: available
// range: 0x415300-0x4153fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00415300(undefined4 param_1,undefined4 param_2)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  uint local_c;
  undefined4 *local_8;
  
  local_c = FUN_00414ae9(*(undefined4 *)(in_EAX + 0xbc),param_2,&local_8,&local_c);
  if ((((local_c == 0) && (local_8 = (undefined4 *)FUN_004114f7(), local_c == 0)) &&
      ((local_c = (uint)local_8 & 0xffffff00, local_c == 0 || (local_c == 0x100)))) &&
     (iVar1 = FUN_00411560(param_1,in_EAX + 0xc4), iVar1 == 0)) {
    uVar2 = (uint)local_8 & 0xff;
    iVar1 = FUN_00414a5b(param_1,uVar2);
    if (iVar1 == 0) {
      local_8 = (undefined4 *)(in_EAX + 0xe8);
      iVar1 = FUN_00414a5b(param_1,uVar2);
      if (iVar1 == 0) {
        if (local_c == 0x100) {
          iVar1 = FUN_00414a5b(param_1,uVar2);
          if (iVar1 == 0) {
            FUN_00414a5b(param_1,uVar2);
          }
        }
        else {
          *(undefined4 *)(in_EAX + 0xf8) = *(undefined4 *)(in_EAX + 0xd8);
          *(undefined4 *)(in_EAX + 0xfc) = *(undefined4 *)(in_EAX + 0xdc);
          *(undefined4 *)(in_EAX + 0x100) = *(undefined4 *)(in_EAX + 0xe0);
          *(undefined4 *)(in_EAX + 0x104) = *(undefined4 *)(in_EAX + 0xe4);
          *(undefined4 *)(in_EAX + 0x108) = *local_8;
          *(undefined4 *)(in_EAX + 0x10c) = local_8[1];
          *(undefined4 *)(in_EAX + 0x110) = local_8[2];
          *(undefined4 *)(in_EAX + 0x114) = local_8[3];
        }
      }
    }
  }
  return;
}

