// rea decompile_all
// name: FUN_0041b3e1
// address: 0x41b3e1
// body: available
// range: 0x41b3e1-0x41b480 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041b3e1(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint *unaff_EBX;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  uVar1 = *unaff_EBX;
  iVar2 = 0;
  uVar3 = 1;
  local_8 = 0;
  if (uVar1 < param_1) {
    uVar5 = in_ECX * 2;
    if (param_1 - uVar1 < (uint)(in_ECX * 2)) {
      uVar5 = param_1 - uVar1;
    }
    if (uVar5 != 0) {
      do {
        uVar4 = (uint)*(byte *)(uVar1 + local_8);
        if (((((uVar4 != 0x20) && (uVar4 != 0xd)) && (uVar4 != 10)) &&
            ((uVar4 != 9 && (uVar4 != 0xc)))) && (uVar4 != 0)) {
          if ((0x7f < uVar4) || (0xf < (uint)(int)(char)(&DAT_008fc4e8)[uVar4 & 0x7f])) break;
          uVar3 = uVar3 << 4 | (int)(char)(&DAT_008fc4e8)[uVar4 & 0x7f];
          if ((uVar3 & 0x100) != 0) {
            *(char *)(iVar2 + param_2) = (char)uVar3;
            iVar2 = iVar2 + 1;
            uVar3 = 1;
          }
        }
        local_8 = local_8 + 1;
      } while (local_8 < uVar5);
      if (uVar3 != 1) {
        *(char *)(iVar2 + param_2) = (char)uVar3 << 4;
        iVar2 = iVar2 + 1;
      }
    }
    *unaff_EBX = uVar1 + local_8;
  }
  return iVar2;
}

