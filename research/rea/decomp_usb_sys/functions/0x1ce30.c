// rea decompile_all
// name: FUN_0001ce30
// address: 0x1ce30
// body: available
// range: 0x1ce30-0x1d142 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001ce30(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  ushort uVar3;
  ulonglong *puVar4;
  byte *pbVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar14;
  undefined1 auStack_98 [32];
  byte local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  byte *local_68;
  ulonglong local_60 [5];
  ulonglong local_38;
  ulonglong *puVar13;
  
  local_38 = DAT_00029100 ^ (ulonglong)auStack_98;
  puVar8 = (ulonglong *)0x0;
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x38) + 3);
  uVar6 = (uint)bVar2;
  local_6c = (uint)bVar2;
  puVar13 = puVar8;
  pbVar14 = (byte *)(*(longlong *)(param_1 + 0x38) + 4);
  if (bVar2 != 0) {
    do {
      pbVar11 = pbVar14 + 2;
      local_70 = (uint)pbVar14[1];
      puVar9 = puVar8;
      if (pbVar14[1] != 0) {
        do {
          puVar4 = (ulonglong *)ExAllocatePoolWithTag(0,0x70,0x5f6e6577);
          puVar10 = puVar8;
          if (puVar4 != (ulonglong *)0x0) {
            FUN_000264d0(puVar4,0,0x70);
            puVar10 = puVar4 + 8;
            puVar4[1] = (ulonglong)puVar4;
            *puVar4 = (ulonglong)puVar4;
            puVar4[9] = (ulonglong)puVar10;
            *puVar10 = (ulonglong)puVar10;
            puVar4[10] = 0;
            *(undefined1 *)((longlong)puVar4 + 0x12) = 0xff;
            *(undefined1 *)((longlong)puVar4 + 0x13) = 0xff;
            puVar10 = puVar4;
          }
          if (puVar10 == (ulonglong *)0x0) {
LAB_0001d109:
            FUN_0001d14c(param_1);
            goto LAB_0001d116;
          }
          plVar7 = *(longlong **)(param_1 + 0x68);
          plVar1 = (longlong *)((longlong)puVar10 + *(longlong *)(param_1 + 0x70));
          *plVar1 = *plVar7;
          plVar1[1] = (longlong)plVar7;
          *(longlong **)(*plVar7 + 8) = plVar1;
          *plVar7 = (longlong)plVar1;
          pbVar5 = FUN_0001bf4c(*(longlong *)(param_1 + 0x78),0,(uint)*pbVar14);
          puVar10[0xb] = (ulonglong)pbVar5;
          if (pbVar5 == (byte *)0x0) goto LAB_0001d109;
          puVar10[0xd] = (ulonglong)pbVar11;
          local_68 = pbVar11 + 3;
          local_74 = (int)puVar9 + 1;
          *(byte *)(puVar10 + 2) = *local_68;
          *(byte *)((longlong)puVar10 + 0x11) = pbVar11[1];
          *(byte *)((longlong)puVar10 + 0x12) = pbVar11[2];
          *(byte *)((longlong)puVar10 + 0x13) = pbVar11[2];
          bVar2 = *pbVar11;
          sprintf((char *)((longlong)puVar10 + 0x14),"Cluster%d%d");
          if (bVar2 != 0) {
            FUN_0001bb78(*(longlong *)(param_1 + 0x78),bVar2,(ulonglong *)((longlong)puVar10 + 0x14)
                        );
          }
          pbVar5 = local_68;
          pbVar11 = pbVar11 + 4;
          local_78 = 0;
          if (*local_68 != 0) {
            do {
              puVar4 = (ulonglong *)ExAllocatePoolWithTag(0,0x60,0x5f6e6577);
              puVar9 = puVar8;
              if (puVar4 != (ulonglong *)0x0) {
                FUN_000264d0(puVar4,0,0x60);
                puVar9 = puVar4 + 2;
                puVar4[1] = (ulonglong)puVar4;
                *puVar4 = (ulonglong)puVar4;
                puVar4[3] = (ulonglong)puVar9;
                *puVar9 = (ulonglong)puVar9;
                puVar9 = puVar4;
              }
              if (puVar9 == (ulonglong *)0x0) goto LAB_0001d109;
              plVar1 = (longlong *)puVar10[9];
              local_60[0]._0_1_ = 0;
              plVar7 = (longlong *)(puVar10[10] + (longlong)puVar9);
              *plVar7 = *plVar1;
              plVar7[1] = (longlong)plVar1;
              *(longlong **)(*plVar1 + 8) = plVar7;
              *plVar1 = (longlong)plVar7;
              plVar1 = *(longlong **)(param_1 + 0x50);
              plVar7 = (longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)puVar9);
              *plVar7 = *plVar1;
              plVar7[1] = (longlong)plVar1;
              *(longlong **)(*plVar1 + 8) = plVar7;
              *plVar1 = (longlong)plVar7;
              *(byte *)((longlong)puVar9 + 0x4a) = pbVar11[2];
              local_78 = local_78 + 1;
              *(byte *)(puVar9 + 9) = local_78;
              *(undefined1 *)(puVar9 + 4) = 0;
              if (*pbVar11 != 0) {
                FUN_0001bb78(*(longlong *)(param_1 + 0x78),*pbVar11,local_60);
              }
              FUN_000117c0((char *)(puVar9 + 4),(char *)local_60,0x28);
              *(byte *)((longlong)puVar9 + 0x49) = pbVar11[1];
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              pbVar11 = pbVar11 + 3;
            } while (local_78 < *pbVar5);
          }
          puVar9 = (ulonglong *)(ulonglong)local_74;
          uVar6 = local_6c;
        } while (local_74 < local_70);
      }
      uVar12 = (int)puVar13 + 1;
      puVar13 = (ulonglong *)(ulonglong)uVar12;
      pbVar14 = pbVar11;
    } while (uVar12 < uVar6);
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    uVar3 = *(ushort *)(*(longlong *)(param_1 + 0x30) + 4);
    *(uint *)(param_1 + 0x18) =
         ((((uVar3 >> 0xb & 3) + 1) * (uVar3 & 0x7ff) + -0xc) * 8000) /
         (uint)(*(int *)(param_1 + 0x14) << 2);
  }
LAB_0001d116:
  FUN_00026110(local_38 ^ (ulonglong)auStack_98);
  return;
}

