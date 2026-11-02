// rea decompile_all
// name: FUN_004ee232
// address: 0x4ee232
// body: available
// range: 0x4ee232-0x4ee31b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004ee232(void)

{
  char cVar1;
  undefined4 *puVar2;
  int in_ECX;
  int unaff_EBX;
  int local_54;
  undefined1 *local_50;
  undefined1 local_3c [16];
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x4ee23e;
  local_54 = 0x4ee248;
  FUN_004edff5();
  if (*(int *)(in_ECX + 0x24) == 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(int *)(*(int *)(in_ECX + 0x24) + 8);
  }
  if (local_18 != 0) {
    local_50 = (undefined1 *)0x4ee26e;
    FUN_004a4d78();
    *(undefined4 *)(in_ECX + 0x28) = 0;
    local_50 = (undefined1 *)local_18;
    local_54 = 0x4ee27d;
    cVar1 = FUN_004ede1f();
    if (cVar1 == '\0') {
      return 0;
    }
    local_50 = (undefined1 *)0x4ee28b;
    cVar1 = FUN_004c14d9();
    if (cVar1 != '\0') {
      local_50 = (undefined1 *)0x4ee294;
      FUN_004c2140();
      local_50 = (undefined1 *)0x4ee299;
      cVar1 = FUN_004c14d9();
      if (cVar1 != '\0') {
        return 1;
      }
    }
    local_50 = (undefined1 *)0x4ee2ab;
    FUN_004edfc1();
    local_8 = 0;
    local_1c = (undefined1 *)&local_54;
    local_54 = *(int *)(unaff_EBX + 0x10);
    local_50 = *(undefined1 **)(unaff_EBX + 0x14);
    puVar2 = (undefined4 *)FUN_004c08d2(local_18,*(undefined4 *)(in_ECX + 4));
    local_2c = *puVar2;
    local_28 = puVar2[1];
    local_50 = (undefined1 *)0x24;
    local_54 = 0x4ee2e2;
    local_1c = (undefined1 *)FUN_005af82d();
    local_8 = CONCAT31(local_8._1_3_,1);
    if (local_1c != (undefined1 *)0x0) {
      local_54 = (int)local_1c;
      local_50 = local_3c;
      FUN_004eded4();
    }
    local_50 = (undefined1 *)0x4ee302;
    FUN_00473c1d();
    local_50 = (undefined1 *)0x4ee30a;
    FUN_004652d6();
    local_50 = (undefined1 *)0x4ee312;
    FUN_004670ed();
    return 1;
  }
  return 0;
}

