// rea decompile_all
// name: FUN_00649230
// address: 0x649230
// body: available
// range: 0x649230-0x649452 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00649230(uint param_1)

{
  int iVar1;
  int in_ECX;
  int in_EDX;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int local_54;
  int local_50;
  int local_4c;
  char local_48 [4];
  undefined2 local_44;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  char acStack_3e [54];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar4 = *(int *)(in_ECX + 0x34);
  if (iVar4 != 0) {
    local_48[3] = (char)in_EDX;
    local_48[0] = (char)((uint)in_EDX >> 0x18);
    local_48[1] = (char)((uint)in_EDX >> 0x10);
    local_48[2] = (char)((uint)in_EDX >> 8);
    local_42 = (undefined1)((uint)iVar4 >> 0x18);
    local_41 = (undefined1)((uint)iVar4 >> 0x10);
    local_3f = *(undefined1 *)(in_ECX + 0x34);
    local_44 = 0x203a;
    local_40 = (undefined1)((uint)iVar4 >> 8);
    uVar2 = 10;
    do {
      uVar3 = uVar2;
      if (0x3e < uVar2) break;
      local_48[uVar2] = "Only compression method 8 is supported by PNG"[uVar2 + 0x26];
      uVar3 = uVar2 + 1;
      iVar4 = uVar2 + 0x27;
      uVar2 = uVar3;
    } while ("Only compression method 8 is supported by PNG"[iVar4] != '\0');
    local_48[uVar3] = '\0';
    FUN_006563b0();
    if (*(int *)(in_ECX + 0x34) == 0x49444154) {
      *(char **)(in_ECX + 0x50) = "in use by IDAT";
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    *(undefined4 *)(in_ECX + 0x34) = 0;
  }
  local_4c = *(int *)(in_ECX + 0x78);
  local_50 = *(int *)(in_ECX + 0x7c);
  local_54 = *(int *)(in_ECX + 0x84);
  iVar4 = *(int *)(in_ECX + 0x80);
  if (in_EDX == 0x49444154) {
    if ((*(byte *)(in_ECX + 0x2c) & 1) == 0) {
      uVar2 = (uint)(*(char *)(in_ECX + 0x10a) != '\b');
    }
    else {
      uVar2 = *(uint *)(in_ECX + 0x88);
    }
  }
  else {
    local_4c = *(int *)(in_ECX + 0x8c);
    iVar4 = *(int *)(in_ECX + 0x94);
    uVar2 = *(uint *)(in_ECX + 0x9c);
    local_50 = *(int *)(in_ECX + 0x90);
    local_54 = *(int *)(in_ECX + 0x98);
  }
  if (param_1 < 0x4001) {
    for (uVar3 = 1 << ((char)iVar4 - 1U & 0x1f); param_1 + 0x106 <= uVar3; uVar3 = uVar3 >> 1) {
      iVar4 = iVar4 + -1;
    }
  }
  if (((*(byte *)(in_ECX + 0x2c) & 2) != 0) &&
     ((((*(int *)(in_ECX + 0xa0) != local_4c || (*(int *)(in_ECX + 0xa4) != local_50)) ||
       (*(int *)(in_ECX + 0xa8) != iVar4)) ||
      ((*(int *)(in_ECX + 0xac) != local_54 || (*(uint *)(in_ECX + 0xb0) != uVar2)))))) {
    iVar1 = FUN_00618e50();
    if (iVar1 != 0) {
      FUN_006563b0();
    }
    *(uint *)(in_ECX + 0x2c) = *(uint *)(in_ECX + 0x2c) & 0xfffffffd;
  }
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  if ((*(byte *)(in_ECX + 0x2c) & 2) == 0) {
    iVar4 = FUN_00619910(local_50,iVar4,local_54,uVar2,"1.2.3",(undefined4 *)(in_ECX + 0x38));
    if (iVar4 == 0) {
      *(uint *)(in_ECX + 0x2c) = *(uint *)(in_ECX + 0x2c) | 2;
      goto LAB_0064943a;
    }
  }
  else {
    iVar4 = FUN_00619870();
    if (iVar4 == 0) {
LAB_0064943a:
      *(int *)(in_ECX + 0x34) = in_EDX;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  FUN_00658fd0();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

