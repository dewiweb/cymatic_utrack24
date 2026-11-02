// rea decompile_all
// name: FUN_0044684f
// address: 0x44684f
// body: available
// range: 0x44684f-0x4468cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0044684f(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_ESI;
  uint local_44 [9];
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x44685b;
  *(uint *)(unaff_ESI + 0x6c) = param_1;
  local_44[0] = param_1;
  local_44[0] = FUN_00465858();
  local_8 = 0;
  local_14 = (undefined1 *)local_44;
  local_44[0] = local_44[0] & 0xffff0000;
  puVar2 = (undefined4 *)FUN_004d076d();
  local_1e = 0;
  local_20 = 4;
  local_1c = 0xf008;
  local_1a = 0;
  iVar1 = *(int *)(*(int *)(unaff_ESI + 0x14) + 0x14);
  uVar3 = FUN_00503bc0(&local_20,*puVar2);
  (**(code **)(iVar1 + 0x20))(0,uVar3);
  FUN_004652d6();
  return;
}

