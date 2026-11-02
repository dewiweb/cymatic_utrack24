// rea decompile_all
// name: FUN_00650810
// address: 0x650810
// body: available
// range: 0x650810-0x650911 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00650810(void)

{
  int iVar1;
  int in_ECX;
  undefined4 in_EDX;
  uint uVar2;
  uint uVar3;
  char local_50 [4];
  char acStack_4c [64];
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(in_ECX + 0x34);
  if (iVar1 != 0) {
    local_50[0] = (char)((uint)iVar1 >> 0x18);
    local_50[1] = (char)((uint)iVar1 >> 0x10);
    local_50[3] = *(undefined1 *)(in_ECX + 0x34);
    local_50[2] = (char)((uint)iVar1 >> 8);
    uVar2 = 4;
    do {
      uVar3 = uVar2;
      if (0x3e < uVar2) break;
      local_50[uVar2] = "rgb to gray green coefficient"[uVar2 + 0x1c];
      uVar3 = uVar2 + 1;
      iVar1 = uVar2 + 0x1d;
      uVar2 = uVar3;
    } while ("rgb to gray green coefficient"[iVar1] != '\0');
    local_50[uVar3] = '\0';
    FUN_00656080(local_50);
    FUN_006563b0();
    *(undefined4 *)(in_ECX + 0x34) = 0;
  }
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  if ((*(byte *)(in_ECX + 0x2c) & 2) == 0) {
    iVar1 = FUN_00617980("1.2.3",(undefined4 *)(in_ECX + 0x38));
    if (iVar1 == 0) {
      *(uint *)(in_ECX + 0x2c) = *(uint *)(in_ECX + 0x2c) | 2;
      goto LAB_006508fd;
    }
  }
  else {
    iVar1 = FUN_00617a50();
    if (iVar1 == 0) {
LAB_006508fd:
      *(undefined4 *)(in_ECX + 0x34) = in_EDX;
      __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  FUN_00658fd0();
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

