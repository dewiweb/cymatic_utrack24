// rea decompile_all
// name: FUN_004735c5
// address: 0x4735c5
// body: available
// range: 0x4735c5-0x473631 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004735c5(void)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  piVar1 = DAT_0095d678;
  uStack_4 = 0xc;
  local_8 = 0x4735d1;
  puStack_30 = local_18;
  uStack_34 = 0x4735e0;
  puStack_30 = (undefined1 *)FUN_00473790();
  local_8 = 0;
  local_1c = auStack_38;
  puVar2 = auStack_38;
  (**(code **)(*piVar1 + 4))(auStack_38);
  FUN_00465c6b(&uStack_34,puVar2);
  FUN_00465c30(local_14);
  local_8 = CONCAT31(local_8._1_3_,1);
  uStack_34 = 0x47361a;
  FUN_00474b70();
  uStack_34 = 0x473622;
  FUN_004652d6();
  uStack_34 = 0x47362a;
  FUN_004652d6();
  return 1;
}

