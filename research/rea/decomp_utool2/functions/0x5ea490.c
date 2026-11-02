// rea decompile_all
// name: FUN_005ea490
// address: 0x5ea490
// body: available
// range: 0x5ea490-0x5ea6fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005ea490(void)

{
  int *in_ECX;
  int iVar1;
  uint uVar2;
  int *in_EDX;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = in_ECX[7];
  if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  local_18 = 0xffffffff;
  iVar3 = 0;
  uStack_14 = 0xffffffff;
  if (iVar1 == 0) {
    return 0;
  }
  iVar5 = 0;
  local_1c = 0;
  if (in_ECX[0x53] == 0) {
    if (0 < iVar1) {
      pcVar4 = (char *)in_ECX[4];
      do {
        iVar5 = iVar5 + 1;
        local_1c = iVar5;
        if (*pcVar4 != -1) break;
        pcVar4 = pcVar4 + 4;
      } while (iVar5 < iVar1);
    }
    uStack_14 = 0;
    local_18 = 0;
  }
  else if (iVar1 < 1) {
    local_18 = 0xffffffff;
  }
  else {
    do {
      local_1c = iVar5;
      if (0x1000 < iVar3) break;
      uVar2 = *(uint *)(in_ECX[4] + iVar5 * 4) & 0xff;
      iVar3 = iVar3 + uVar2;
      if (uVar2 < 0xff) {
        local_18 = *(undefined4 *)(in_ECX[5] + iVar5 * 8);
        uStack_14 = *(undefined4 *)(in_ECX[5] + 4 + iVar5 * 8);
      }
      iVar5 = iVar5 + 1;
      local_1c = iVar5;
    } while (iVar5 < iVar1);
  }
  in_ECX[10] = 0x5367674f;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  if ((*(uint *)in_ECX[4] & 0x100) == 0) {
    *(undefined1 *)((int)in_ECX + 0x2d) = 1;
  }
  if (in_ECX[0x53] == 0) {
    *(byte *)((int)in_ECX + 0x2d) = *(byte *)((int)in_ECX + 0x2d) | 2;
  }
  if ((in_ECX[0x52] != 0) && (in_ECX[7] == local_1c)) {
    *(byte *)((int)in_ECX + 0x2d) = *(byte *)((int)in_ECX + 0x2d) | 4;
  }
  in_ECX[0x53] = 1;
  *(char *)((int)in_ECX + 0x2e) = (char)local_18;
  *(char *)((int)in_ECX + 0x2f) = (char)((uint)local_18 >> 8);
  *(char *)(in_ECX + 0xc) = (char)((uint)local_18 >> 0x10);
  *(char *)((int)in_ECX + 0x31) = (char)((uint)local_18 >> 0x18);
  *(char *)((int)in_ECX + 0x32) = (char)uStack_14;
  *(char *)((int)in_ECX + 0x33) = (char)((uint)uStack_14 >> 8);
  *(char *)(in_ECX + 0xd) = (char)((uint)uStack_14 >> 0x10);
  *(char *)((int)in_ECX + 0x35) = (char)((uint)uStack_14 >> 0x18);
  iVar1 = in_ECX[0x54];
  *(char *)((int)in_ECX + 0x36) = (char)iVar1;
  *(char *)((int)in_ECX + 0x37) = (char)((uint)iVar1 >> 8);
  *(char *)(in_ECX + 0xe) = (char)((uint)iVar1 >> 0x10);
  *(char *)((int)in_ECX + 0x39) = (char)((uint)iVar1 >> 0x18);
  if (in_ECX[0x55] == -1) {
    in_ECX[0x55] = 0;
  }
  iVar1 = in_ECX[0x55];
  iVar3 = 0;
  iVar5 = 0;
  in_ECX[0x55] = iVar1 + 1;
  *(char *)((int)in_ECX + 0x3a) = (char)iVar1;
  *(char *)((int)in_ECX + 0x3b) = (char)((uint)iVar1 >> 8);
  *(char *)(in_ECX + 0xf) = (char)((uint)iVar1 >> 0x10);
  *(char *)((int)in_ECX + 0x3d) = (char)((uint)iVar1 >> 0x18);
  iVar1 = 0;
  *(undefined4 *)((int)in_ECX + 0x3e) = 0;
  *(char *)((int)in_ECX + 0x42) = (char)local_1c;
  if (1 < local_1c) {
    do {
      uVar2 = *(uint *)(in_ECX[4] + iVar1 * 4);
      *(char *)((int)in_ECX + iVar1 + 0x43) = (char)uVar2;
      iVar3 = iVar3 + (uVar2 & 0xff);
      uVar2 = *(uint *)(in_ECX[4] + 4 + iVar1 * 4);
      *(char *)((int)in_ECX + iVar1 + 0x44) = (char)uVar2;
      iVar1 = iVar1 + 2;
      iVar5 = iVar5 + (uVar2 & 0xff);
    } while (iVar1 < local_1c + -1);
  }
  if (iVar1 < local_1c) {
    uVar2 = *(uint *)(in_ECX[4] + iVar1 * 4);
    *(char *)(iVar1 + 0x43 + (int)in_ECX) = (char)uVar2;
    uVar2 = uVar2 & 0xff;
  }
  else {
    uVar2 = 0;
  }
  iVar1 = uVar2 + iVar5 + iVar3;
  *in_EDX = (int)(in_ECX + 10);
  in_ECX[0x51] = local_1c + 0x1b;
  in_EDX[1] = local_1c + 0x1b;
  in_EDX[2] = in_ECX[3] + *in_ECX;
  in_EDX[3] = iVar1;
  in_ECX[7] = in_ECX[7] - local_1c;
  FUN_004c1df0(in_ECX[4],in_ECX[4] + local_1c * 4,in_ECX[7] << 2);
  FUN_004c1df0(in_ECX[5],in_ECX[5] + local_1c * 8,in_ECX[7] << 3);
  in_ECX[3] = in_ECX[3] + iVar1;
  FUN_005ea890();
  return 1;
}

