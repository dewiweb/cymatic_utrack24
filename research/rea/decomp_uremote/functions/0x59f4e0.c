// rea decompile_all
// name: FUN_0059f4e0
// address: 0x59f4e0
// body: available
// range: 0x59f4e0-0x59f59d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059f4e0(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined2 local_28;
  undefined1 local_24 [16];
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  short local_a;
  undefined2 local_8;
  
  FUN_005684c0();
  iVar2 = *(int *)(in_ECX + 0x114);
  uVar1 = *(undefined2 *)(in_ECX + 0x118);
  uVar3 = *(undefined4 *)(in_ECX + 0x114);
  FUN_00503bc0();
  FUN_00503de0(&DAT_0095c854);
  local_28 = (undefined2)uVar3;
  local_14 = local_28;
  local_10 = 0;
  local_e = 0;
  local_c = 3;
  local_8 = 0;
  local_12 = uVar1;
  local_a = (-(ushort)(iVar2 != 2) & 0xfffe) + 1;
  FUN_00552310(local_24);
  FUN_00568ea0();
  FUN_005a0ae0(4);
  return;
}

