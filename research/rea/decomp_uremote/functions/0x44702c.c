// rea decompile_all
// name: FUN_0044702c
// address: 0x44702c
// body: available
// range: 0x44702c-0x4470fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0044702c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  int unaff_ESI;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x447038;
  iVar1 = in_ECX;
  if (0 < in_ECX) {
    iVar1 = 0;
  }
  if (iVar1 < -0x1e) {
    iVar1 = -0x1e;
  }
  *(int *)(unaff_ESI + 0x158) = in_ECX;
  *(short *)(unaff_ESI + 0x15c) = (short)(((iVar1 + 0x1e) * 0xffff) / 0x1e);
  FUN_005017d0();
  local_8 = 0;
  FUN_00502380();
  FUN_00502720();
  local_16 = 4;
  local_18 = 1;
  local_14 = 0xb201;
  iVar1 = *(int *)(*(int *)(unaff_ESI + 0x14) + 0x14);
  uVar2 = FUN_00501d60();
  uVar3 = FUN_00504050(*(undefined2 *)(unaff_ESI + 0x15c),0);
  uVar2 = FUN_00503bc0(&local_18,uVar3,uVar2);
  (**(code **)(iVar1 + 0x18))(0,uVar2);
  local_8 = 0xffffffff;
  FUN_00501900();
  return;
}

