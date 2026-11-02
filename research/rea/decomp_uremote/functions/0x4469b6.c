// rea decompile_all
// name: FUN_004469b6
// address: 0x4469b6
// body: available
// range: 0x4469b6-0x446a1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004469b6(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_ECX;
  undefined2 in_DX;
  int unaff_ESI;
  undefined4 uVar4;
  uint uVar5;
  undefined2 local_c;
  undefined2 local_a;
  short local_8;
  undefined2 local_6;
  
  puVar1 = (undefined2 *)(unaff_ESI + 0xa4 + in_ECX * 2);
  *puVar1 = in_DX;
  local_8 = (short)in_ECX + -0x2f90;
  uVar5 = in_ECX & 0xffff0000;
  local_a = 0;
  local_6 = 0;
  uVar4 = 0;
  local_c = 1;
  iVar2 = *(int *)(*(int *)(unaff_ESI + 0x14) + 0x14);
  uVar3 = FUN_00504050(*puVar1,0);
  uVar3 = FUN_00503bc0(&local_c,uVar3,uVar4,uVar5);
  (**(code **)(iVar2 + 0x18))(0,uVar3);
  return;
}

