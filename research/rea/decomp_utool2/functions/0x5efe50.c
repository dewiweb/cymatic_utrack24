// rea decompile_all
// name: FUN_005efe50
// address: 0x5efe50
// body: available
// range: 0x5efe50-0x5f01e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005efe50(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  uint uVar6;
  undefined1 auStack_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  byte bStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined1 uStack_10;
  undefined1 uStack_f;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)auStack_3c;
  iVar4 = in_ECX[1];
  local_34 = *(undefined4 *)(iVar4 + 0x1b08);
  local_24 = *(undefined4 *)(iVar4 + 0x1b0c);
  local_30 = *(undefined4 *)(iVar4 + 0x1af0);
  local_2c = *(undefined4 *)(iVar4 + 0x1af4);
  local_38 = *(undefined4 *)(iVar4 + 0x1b00);
  iVar4 = (**(code **)(iVar4 + 0x1c60))();
  if (iVar4 == 0) {
    iVar4 = (**(code **)(in_ECX[1] + 0x1c68))();
    if (iVar4 == 0) {
      bStack_20 = (byte)local_24 & 0xf | ((char)local_38 + -1) * '\x10';
      uStack_1c = (undefined1)local_34;
      uStack_1f = (undefined1)((uint)local_34 >> 0x18);
      uStack_1e = (undefined1)((uint)local_34 >> 0x10);
      uStack_1d = (undefined1)((uint)local_34 >> 8);
      iVar4 = (**(code **)(in_ECX[1] + 0x1c60))();
      if (iVar4 != 0) goto LAB_005efeca;
      iVar4 = (**(code **)(in_ECX[1] + 0x1c68))();
      if (iVar4 == 0) {
        bStack_20 = (byte)((uint)local_30 >> 0x10);
        uStack_1f = (undefined1)((uint)local_30 >> 8);
        uStack_1e = (undefined1)local_30;
        uStack_1d = (undefined1)((uint)local_2c >> 0x10);
        uStack_1c = (undefined1)((uint)local_2c >> 8);
        uStack_1b = (undefined1)local_2c;
        iVar4 = (**(code **)(in_ECX[1] + 0x1c60))();
        if (iVar4 != 0) goto LAB_005efeca;
        iVar4 = (**(code **)(in_ECX[1] + 0x1c68))();
        if (iVar4 == 0) {
          if (((*(int **)(in_ECX[1] + 0x1b88) == (int *)0x0) ||
              (**(int **)(in_ECX[1] + 0x1b88) == 0)) ||
             ((*(int *)(*in_ECX + 0x26c) == 0 && (*(int *)(*in_ECX + 0x268) == 0))))
          goto LAB_005efed7;
          FUN_005fc7b0();
          iVar4 = (**(code **)(in_ECX[1] + 0x1c60))();
          if (iVar4 != 0) goto LAB_005efeca;
          uVar6 = 0;
          if (**(int **)(in_ECX[1] + 0x1b88) == 0) goto LAB_005efed7;
          iVar4 = 0;
          while( true ) {
            iVar5 = in_ECX[1];
            iVar1 = *(int *)(*(int *)(iVar5 + 0x1b88) + 4);
            uVar2 = *(undefined4 *)(iVar4 + iVar1);
            uVar3 = *(undefined4 *)(iVar4 + 4 + iVar1);
            uStack_19 = (undefined1)uVar2;
            uStack_1a = (undefined1)((uint)uVar2 >> 8);
            uStack_1b = (undefined1)((uint)uVar2 >> 0x10);
            uStack_1c = (undefined1)((uint)uVar2 >> 0x18);
            bStack_20 = (byte)((uint)uVar3 >> 0x18);
            uStack_1d = (undefined1)uVar3;
            uStack_1e = (undefined1)((uint)uVar3 >> 8);
            uStack_1f = (undefined1)((uint)uVar3 >> 0x10);
            iVar1 = *(int *)(*(int *)(iVar5 + 0x1b88) + 4);
            uVar2 = *(undefined4 *)(iVar1 + 8 + iVar4);
            uVar3 = *(undefined4 *)(iVar1 + 0xc + iVar4);
            uStack_11 = (undefined1)uVar2;
            uStack_12 = (undefined1)((uint)uVar2 >> 8);
            uStack_13 = (undefined1)((uint)uVar2 >> 0x10);
            uStack_14 = (undefined1)((uint)uVar2 >> 0x18);
            uStack_18 = (undefined1)((uint)uVar3 >> 0x18);
            uStack_15 = (undefined1)uVar3;
            uStack_16 = (undefined1)((uint)uVar3 >> 8);
            uStack_17 = (undefined1)((uint)uVar3 >> 0x10);
            uVar2 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x1b88) + 4) + 0x10 + iVar4);
            uStack_f = (undefined1)uVar2;
            uStack_10 = (undefined1)((uint)uVar2 >> 8);
            iVar5 = (**(code **)(iVar5 + 0x1c68))();
            if (iVar5 != 0) break;
            uVar6 = uVar6 + 1;
            iVar4 = iVar4 + 0x18;
            if (**(uint **)(in_ECX[1] + 0x1b88) <= uVar6) {
              __security_check_cookie(local_c ^ (uint)auStack_3c);
              return;
            }
          }
        }
      }
    }
  }
  else {
LAB_005efeca:
    if (iVar4 != 1) goto LAB_005efed7;
  }
  *(undefined4 *)*in_ECX = 5;
LAB_005efed7:
  __security_check_cookie(local_c ^ (uint)auStack_3c);
  return;
}

