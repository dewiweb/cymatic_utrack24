// rea decompile_all
// name: FUN_0041b481
// address: 0x41b481
// body: available
// range: 0x41b481-0x41b4fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0041b481(uint *param_1,byte *param_2,ushort *param_3)

{
  uint uVar1;
  uint uVar2;
  uint in_EAX;
  uint in_ECX;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint local_c;
  uint local_8;
  
  uVar4 = *param_3;
  uVar5 = (uint)uVar4;
  uVar1 = *param_1;
  if (uVar1 < in_ECX) {
    if (in_ECX - uVar1 < in_EAX) {
      in_EAX = in_ECX - uVar1;
    }
    local_c = 0;
    if (in_EAX != 0) {
      iVar3 = uVar1 - (int)param_2;
      local_8 = in_EAX;
      do {
        uVar2 = uVar5 >> 8;
        uVar6 = (param_2[iVar3] + uVar5) * -0x3193 + 0x58bf;
        uVar5 = uVar6 & 0xffff;
        uVar4 = (ushort)uVar6;
        *param_2 = (byte)uVar2 ^ param_2[iVar3];
        param_2 = param_2 + 1;
        local_8 = local_8 - 1;
        local_c = in_EAX;
      } while (local_8 != 0);
    }
    *param_1 = uVar1 + in_EAX;
    *param_3 = uVar4;
  }
  else {
    local_c = 0;
  }
  return local_c;
}

