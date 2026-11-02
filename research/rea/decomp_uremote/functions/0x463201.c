// rea decompile_all
// name: FUN_00463201
// address: 0x463201
// body: available
// range: 0x463201-0x4632b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00463201(undefined4 param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int unaff_EDI;
  undefined4 local_18;
  int iStack_14;
  undefined1 *local_c;
  undefined4 local_8;
  
  iStack_14 = 0x463212;
  FUN_00460973();
  **(undefined4 **)(unaff_EDI + 4) = local_8;
  local_8 = **(undefined4 **)(unaff_EDI + 4);
  iStack_14 = 0x46322a;
  iStack_14 = FUN_00460791();
  local_18 = 0x463230;
  cVar2 = FUN_00464f8d();
  if (cVar2 == '\0') {
    iStack_14 = 0x46323d;
    uVar3 = FUN_00460791();
    if (uVar3 != 0x5f) goto LAB_004632b1;
  }
  iStack_14 = 0x46324a;
  FUN_004607e3();
  iVar4 = 1;
  do {
    iStack_14 = 0x463255;
    iStack_14 = FUN_00460791();
    local_18 = 0x46325b;
    cVar2 = FUN_00464fbb();
    if (cVar2 == '\0') {
      iStack_14 = 0x463268;
      uVar3 = FUN_00460791();
      if (uVar3 != 0x5f) break;
    }
    iStack_14 = 0x463275;
    FUN_004607e3();
    iVar4 = iVar4 + 1;
  } while( true );
  if (0 < iVar4) {
    local_c = (undefined1 *)&local_18;
    local_18 = **(undefined4 **)(unaff_EDI + 4);
    iStack_14 = iVar4;
    FUN_00465426(&local_c);
    iStack_14 = param_1;
    local_18 = 0x46329d;
    FUN_00465317();
    iStack_14 = 0x4632a5;
    FUN_004652d6();
    puVar1 = *(undefined4 **)(unaff_EDI + 4);
    *puVar1 = local_8;
    return CONCAT31((int3)((uint)puVar1 >> 8),1);
  }
LAB_004632b1:
  return uVar3 & 0xffffff00;
}

