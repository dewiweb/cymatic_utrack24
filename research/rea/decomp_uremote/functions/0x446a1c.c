// rea decompile_all
// name: FUN_00446a1c
// address: 0x446a1c
// body: available
// range: 0x446a1c-0x446aa1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00446a1c(void)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_EDX;
  int unaff_ESI;
  undefined2 local_10;
  undefined2 local_e;
  short local_c;
  undefined2 local_a;
  undefined *local_8;
  
  puVar1 = (ushort *)(unaff_ESI + 0xd4 + in_EDX * 2);
  uVar2 = *puVar1;
  local_8 = &DAT_009106f4;
  *puVar1 = (ushort)(uVar2 == 0);
  if ((uVar2 == 0) == 0) {
    local_8 = &DAT_009106f8;
  }
  local_e = 0;
  local_10 = 2;
  local_a = 0;
  local_c = (short)in_EDX + -0x2fd0;
  iVar3 = *(int *)(*(int *)(unaff_ESI + 0x14) + 0x14);
  uVar4 = FUN_00503bc0(&local_10,*puVar1 != 0,local_8,0,0);
  (**(code **)(iVar3 + 0x1c))(0,uVar4);
  return;
}

