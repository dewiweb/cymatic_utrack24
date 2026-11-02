// rea decompile_all
// name: FUN_004610bc
// address: 0x4610bc
// body: available
// range: 0x4610bc-0x461137 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004610bc(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 local_c;
  undefined1 local_8 [4];
  
  bVar2 = false;
  bVar1 = false;
  local_c = 0;
  iVar4 = FUN_0046694e();
  if (iVar4 == 0) {
    puVar5 = &DAT_0090ee30;
    bVar2 = true;
    bVar1 = false;
    FUN_00466678(param_1,&local_c);
    cVar3 = FUN_004659bc(puVar5);
    if (cVar3 == '\0') {
      bVar2 = true;
      bVar1 = true;
      puVar5 = &DAT_00917250;
      FUN_00466678(param_1,local_8);
      cVar3 = FUN_004659bc(puVar5);
      param_1._3_1_ = 0;
      if (cVar3 == '\0') goto LAB_00461113;
    }
  }
  param_1._3_1_ = 1;
LAB_00461113:
  if (bVar1) {
    FUN_004652d6();
  }
  if (bVar2) {
    FUN_004652d6();
  }
  return param_1._3_1_;
}

