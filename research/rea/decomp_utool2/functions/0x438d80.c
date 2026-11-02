// rea decompile_all
// name: FUN_00438d80
// address: 0x438d80
// body: available
// range: 0x438d80-0x438fca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00438d80(void)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  int unaff_ESI;
  int iVar6;
  int iStack_64;
  undefined1 *puStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  char cStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined2 uStack_3a;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined2 uStack_36;
  undefined4 uStack_34;
  int aiStack_24 [6];
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)aiStack_24;
  uStack_34 = *(undefined4 *)(in_ECX + 0x5c);
  uVar2 = *(undefined4 *)(in_ECX + 0x58);
  uStack_38 = (undefined1)uVar2;
  uStack_37 = (undefined1)((uint)uVar2 >> 8);
  uStack_36 = (undefined2)((uint)uVar2 >> 0x10);
  uStack_3c = 0xa7;
  uStack_3b = 0x8d;
  uStack_3a = 0x43;
  (**(code **)(**(int **)(in_ECX + 0x1c) + 8))();
  iVar6 = *(int *)(in_ECX + 0x34) + 0x36;
  if (*(int *)(in_ECX + 0x34) == 0) {
    iVar6 = 0x2e;
  }
  if (*(int *)(in_ECX + 0x3c) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(in_ECX + 0x3c) + 8;
  }
  if (*(int *)(in_ECX + 0x44) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(in_ECX + 0x44) + 8;
  }
  uStack_3c = 0x46;
  uStack_3b = 0x4f;
  uStack_3a = 0x4d52;
  uVar4 = ((uint)(*(int *)(in_ECX + 0x10) * *(int *)(in_ECX + 0x14)) >> 3) * *(int *)(in_ECX + 0x48)
  ;
  aiStack_24[0] = uVar4 + (uVar4 & 1);
  uStack_40 = 2;
  cStack_3f = 0x8e;
  uStack_3e = 0x43;
  uStack_3d = 0;
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))();
  iVar6 = unaff_ESI + iVar6 + iVar5 + iVar3;
  uStack_40 = (undefined1)iVar6;
  cStack_3f = (char)((uint)iVar6 >> 8);
  uStack_3e = (undefined1)((uint)iVar6 >> 0x10);
  uStack_3d = (undefined1)((uint)iVar6 >> 0x18);
  uStack_44 = 0x438e19;
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x28))();
  uStack_44 = 0x46464941;
  uStack_48 = 0x438e26;
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))();
  uStack_48 = 0x4d4d4f43;
  uStack_4c = 0x438e33;
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))();
  uStack_4c = 0x12;
  uStack_50 = 0x438e3d;
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x28))();
  uStack_50 = (uint)*(ushort *)(in_ECX + 0x10);
  uStack_54 = 0x438e4a;
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x20))();
  uStack_54 = *(undefined4 *)(in_ECX + 0x48);
  uStack_58 = 0x438e55;
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x28))();
  uStack_58 = (uint)*(ushort *)(in_ECX + 0x14);
  uStack_5c = 0x438e62;
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x20))();
  dVar1 = *(double *)(in_ECX + 8);
  uStack_3e = 0;
  uStack_3d = 0;
  uStack_3c = 0;
  uStack_3b = 0;
  uStack_3a = 0;
  uStack_38 = 0;
  uStack_37 = 0;
  if (1.0 < dVar1) {
    uVar4 = 0x40000000;
    uStack_40 = 0x40;
    if (dVar1 < 1073741824.0) {
      iVar6 = 0;
      do {
        if ((uVar4 & (int)dVar1) != 0) break;
        iVar6 = iVar6 + 1;
        uVar4 = (int)uVar4 >> 1;
      } while (iVar6 < 0x21);
      cStack_3f = '\x1d' - (char)iVar6;
      iVar6 = (int)dVar1 << ((char)iVar6 + 1U & 0x1f);
      uStack_3e = (undefined1)((uint)iVar6 >> 0x18);
      uStack_3d = (undefined1)((uint)iVar6 >> 0x10);
      uStack_3c = (undefined1)((uint)iVar6 >> 8);
      uStack_3b = (undefined1)iVar6;
    }
    else {
      cStack_3f = '\x1d';
    }
  }
  else {
    uStack_40 = 0x3f;
    cStack_3f = -1;
    uStack_3e = 0x80;
  }
  puStack_60 = &uStack_40;
  uStack_5c = 10;
  iStack_64 = 0x438ef9;
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x10))();
  if (*(int *)(in_ECX + 0x34) != 0) {
    iStack_64 = 0x4b52414d;
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))();
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x28))(*(undefined4 *)(in_ECX + 0x34));
    iStack_64 = *(int *)(in_ECX + 0x34);
    if (iStack_64 != 0) {
      (**(code **)(**(int **)(in_ECX + 0x1c) + 0x10))(*(undefined4 *)(in_ECX + 0x30));
    }
  }
  if (*(int *)(in_ECX + 0x3c) != 0) {
    iStack_64 = 0x544d4f43;
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))();
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x28))(*(undefined4 *)(in_ECX + 0x3c));
    iStack_64 = *(int *)(in_ECX + 0x3c);
    if (iStack_64 != 0) {
      (**(code **)(**(int **)(in_ECX + 0x1c) + 0x10))(*(undefined4 *)(in_ECX + 0x38));
    }
  }
  if (*(int *)(in_ECX + 0x44) != 0) {
    iStack_64 = 0x54534e49;
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))();
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x28))(*(undefined4 *)(in_ECX + 0x44));
    iStack_64 = *(int *)(in_ECX + 0x44);
    if (iStack_64 != 0) {
      (**(code **)(**(int **)(in_ECX + 0x1c) + 0x10))(*(undefined4 *)(in_ECX + 0x40));
    }
  }
  iStack_64 = 0x444e5353;
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))();
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x28))(iVar3 + 8);
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(0);
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(0);
  __security_check_cookie(uStack_4c ^ (uint)&iStack_64);
  return;
}

