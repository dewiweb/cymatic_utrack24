// rea decompile_all
// name: FUN_004f537f
// address: 0x4f537f
// body: available
// range: 0x4f537f-0x4f5436 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004f537f(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined1 local_20 [4];
  int local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x4f538b;
  local_18 = GetSystemMetrics(0xd);
  local_1c = GetSystemMetrics(0xe);
  FUN_0049f50b();
  local_8 = 0;
  iVar2 = *(int *)(in_ECX + 4);
  iVar3 = *(int *)(in_ECX + 8);
  iVar1 = FUN_0047e366();
  if (iVar1 <= local_18) {
    iVar1 = FUN_0047e371();
    if (iVar1 <= local_1c) goto LAB_004f5416;
  }
  FUN_0047e3f2(local_20,local_18,local_1c);
  FUN_0049f5e8();
  FUN_004c4d7a();
  iVar1 = FUN_0047e366();
  iVar2 = (iVar2 * local_18) / iVar1;
  iVar1 = FUN_0047e371();
  iVar3 = (iVar3 * local_1c) / iVar1;
LAB_004f5416:
  uVar4 = FUN_004f100b(0,iVar2,iVar3);
  FUN_004c4d7a();
  return uVar4;
}

