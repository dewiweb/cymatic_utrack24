// rea decompile_all
// name: FUN_004297d6
// address: 0x4297d6
// body: available
// range: 0x4297d6-0x429861 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004297d6(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint in_ECX;
  uint in_EDX;
  uint uVar6;
  uint uVar7;
  
  uVar2 = (in_EDX & 0xffff) * param_1;
  param_1 = ((int)in_EDX >> 0x10) * param_1;
  uVar7 = param_1 * 0x10000 + uVar2;
  uVar3 = (in_ECX & 0xffff) * param_2;
  param_2 = ((int)in_ECX >> 0x10) * param_2;
  uVar6 = param_2 * 0x10000 + uVar3;
  uVar1 = uVar6 + uVar7;
  iVar4 = ((int)uVar3 >> 0x1f) +
          (param_2 >> 0x10) + (uint)(uVar7 < uVar2) + (param_1 >> 0x10) + ((int)uVar2 >> 0x1f) +
          (uint)(uVar1 < uVar7) + (uint)(uVar6 < uVar3);
  iVar5 = iVar4 >> 0x1f;
  uVar2 = iVar5 + uVar1;
  return ((uint)(uVar2 + 0x2000 < uVar2) + iVar4 + (uint)(uVar2 < uVar1) + iVar5) * 0x40000 |
         uVar2 + 0x2000 >> 0xe;
}

