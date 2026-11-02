// rea decompile_all
// name: FUN_00466389
// address: 0x466389
// body: available
// range: 0x466389-0x466411 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00466389(char *param_1)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  size_t sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint *unaff_EDI;
  
  sVar3 = _strlen((char *)*unaff_EDI);
  uVar2 = *unaff_EDI;
  sVar4 = _strlen(param_1);
  uVar1 = *unaff_EDI;
  while ((uVar1 < sVar3 + uVar2 && (param_1 < param_1 + sVar4))) {
    FUN_0046080a();
    FUN_0046080a();
    uVar5 = FUN_00460791();
    iVar6 = FUN_00464f5d(uVar5);
    uVar5 = FUN_00460791();
    iVar7 = FUN_00464f5d(uVar5);
    if (iVar6 != iVar7) {
      return false;
    }
    uVar1 = *unaff_EDI;
  }
  return param_1 + sVar4 == param_1;
}

