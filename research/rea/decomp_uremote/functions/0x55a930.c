// rea decompile_all
// name: FUN_0055a930
// address: 0x55a930
// body: available
// range: 0x55a930-0x55aa6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0055a930(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *in_ECX;
  ushort local_c;
  ushort local_8;
  
  local_8 = 0xffff;
  local_c = 0;
  do {
    if (*(ushort *)(in_ECX + 1) <= local_c) {
      if ((short)local_8 < 0) {
        FUN_0055acb0((uint)*(ushort *)(in_ECX + 1) + (uint)*(ushort *)((int)in_ECX + 6));
        FUN_00503650(param_1);
        *(undefined2 *)(*in_ECX + 0xc + (uint)local_c * 0x10) = 1;
        uVar2 = CONCAT22((short)((uint)local_c * 0x10 >> 0x10),local_c);
      }
      else {
        FUN_00503650(param_1);
        *(undefined2 *)(*in_ECX + 0xc + (uint)local_8 * 0x10) = 1;
        uVar2 = CONCAT22((short)((uint)local_8 * 0x10 >> 0x10),local_8);
      }
      return uVar2;
    }
    if (*(short *)(*in_ECX + 0xc + (uint)local_c * 0x10) == 0) {
      if ((short)local_8 < 0) {
        local_8 = local_c;
      }
    }
    else {
      cVar1 = FUN_005034a0(param_1);
      if (cVar1 != '\0') {
        *(short *)(*in_ECX + 0xc + (uint)local_c * 0x10) =
             *(short *)(*in_ECX + 0xc + (uint)local_c * 0x10) + 1;
        return CONCAT22((short)((uint)local_c * 0x10 >> 0x10),local_c);
      }
    }
    local_c = local_c + 1;
  } while( true );
}

