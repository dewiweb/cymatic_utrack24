// rea decompile_all
// name: FUN_001fefc8
// address: 0x1fefc8
// body: available
// range: 0x1fefc8-0x1ff213 inclusive
// range: 0x1ff216-0x1ff25d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1ff122 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1ff250 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001fefc8(int param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  ushort *puVar11;
  uint *puVar12;
  uint *puVar13;
  ushort uVar14;
  uint uVar15;
  
  pbVar3 = *(byte **)(param_1 + 4);
  if (((uint)*(ushort *)(param_1 + 8) < (*pbVar3 & 0xf) * 4 + 8) ||
     (iVar4 = FUN_001f10f8(param_1,(*pbVar3 & 0xf) * -4), iVar4 != 0)) goto LAB_001feff2;
  puVar11 = *(ushort **)(param_1 + 4);
  iVar4 = FUN_001deb2c(*DAT_001ff260,param_2);
  uVar14 = *puVar11;
  uVar9 = uVar14 >> 8 | uVar14 << 8;
  uVar14 = puVar11[1];
  puVar12 = (uint *)0x0;
  uVar14 = uVar14 >> 8 | uVar14 << 8;
  if (uVar14 == 0x44) {
    if ((((uVar9 != 0x43) || (*(int *)(param_2 + 0x24) == 0)) ||
        (puVar6 = *(uint **)(*(int *)(param_2 + 0x24) + 4), puVar6 == (uint *)0x0)) ||
       (((puVar6 != (uint *)0xfffffffc && (puVar6[1] != 0)) && (puVar6[1] != *DAT_001ff264))))
    goto LAB_001ff0f8;
  }
  else {
    puVar13 = *(uint **)(DAT_001ff268 + 4);
    puVar12 = (uint *)0x0;
    if (puVar13 != (uint *)0x0) {
      uVar10 = *DAT_001ff260;
      puVar5 = (uint *)0x0;
      puVar6 = puVar13;
      do {
        if ((*(ushort *)((int)puVar6 + 0x12) == uVar14) &&
           (((((iVar4 == 0 && ((puVar6 == (uint *)0x0 || (*puVar6 == 0)))) ||
              (uVar15 = *puVar6, uVar15 == uVar10)) || ((uVar10 & 0xff) >> 4 == 0xe)) ||
            ((iVar4 != 0 &&
             (((puVar6 == (uint *)0x0 || (uVar15 == 0)) ||
              ((uVar15 & *(uint *)(param_2 + 8)) == (*(uint *)(param_2 + 8) & uVar10))))))))) {
          if ((puVar12 == (uint *)0x0) && (-1 < (int)((uint)(byte)puVar6[4] << 0x1d))) {
            puVar12 = puVar6;
          }
          if (((ushort)puVar6[5] == uVar9) &&
             (((puVar6 == (uint *)0xfffffffc || (puVar6[1] == 0)) || (puVar6[1] == *DAT_001ff264))))
          {
            if (puVar5 != (uint *)0x0) {
              puVar5[3] = puVar6[3];
              iVar7 = DAT_001ff268;
              puVar6[3] = (uint)puVar13;
              *(uint **)(iVar7 + 4) = puVar6;
            }
            if (puVar6 != (uint *)0x0) goto LAB_001ff106;
            break;
          }
        }
        puVar1 = puVar6 + 3;
        puVar5 = puVar6;
        puVar6 = (uint *)*puVar1;
      } while ((uint *)*puVar1 != (uint *)0x0);
    }
    puVar6 = puVar12;
    if (puVar12 == (uint *)0x0) {
LAB_001ff0f8:
      puVar6 = puVar12;
      if (*(uint *)(param_2 + 4) != *DAT_001ff260) goto LAB_001feff2;
    }
  }
LAB_001ff106:
  iVar7 = FUN_001f10f8(param_1,0xfffffff8);
  if (iVar7 != 0) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001ff284,s___pbuf_header_failed_001ff26e + 2,
                 0x158,_DAT_001ff26c);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  if (puVar6 == (uint *)0x0) {
    if ((iVar4 == 0) && ((*DAT_001ff260 & 0xff) >> 4 != 0xe)) {
      FUN_001f10f8(param_1,(*pbVar3 & 0xf) * '\x04' + '\b');
      if (*(byte **)(param_1 + 4) != pbVar3) {
        FUN_00013290(s_Assertion___s__failed_at_line__d_001ff284,s_p_>payload____iphdr_001ff2b8,
                     0x1a3,_DAT_001ff26c);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
      FUN_001dd4d8(param_1,3);
    }
  }
  else {
    if (((iVar4 != 0) || ((*DAT_001ff260 & 0xff) >> 4 == 0xe)) &&
       ((int)((uint)(byte)puVar6[2] << 0x1d) < 0)) {
      bVar2 = false;
      puVar12 = *(uint **)(DAT_001ff268 + 4);
      if (puVar12 != (uint *)0x0) {
        do {
          if ((((puVar12 != puVar6) && (*(ushort *)((int)puVar12 + 0x12) == uVar14)) &&
              (((iVar4 == 0 && ((puVar12 == (uint *)0x0 || (*puVar12 == 0)))) ||
               ((*puVar12 == *DAT_001ff260 || (((*DAT_001ff260 & 0xff) >> 4 == 0xe || (iVar4 != 0)))
                ))))) && (puVar12[7] != 0)) {
            if (!bVar2) {
              FUN_001f10f8(param_1,(*pbVar3 & 0xf) * '\x04' + '\b');
              bVar2 = true;
            }
            iVar7 = FUN_001f0830(3,*(undefined2 *)(param_1 + 8),0);
            if ((iVar7 != 0) && (iVar8 = FUN_001f0c94(iVar7,param_1), iVar8 == 0)) {
              FUN_001f10f8(iVar7,-((*pbVar3 & 0xf) * 4 + 8));
              (*(code *)puVar12[7])(puVar12[8],puVar12,iVar7,DAT_001ff264,uVar9);
            }
          }
          puVar12 = (uint *)puVar12[3];
        } while (puVar12 != (uint *)0x0);
        if (bVar2) {
          FUN_001f10f8(param_1,-((*pbVar3 & 0xf) * 4 + 8));
        }
      }
    }
    if ((code *)puVar6[7] != entry) {
      (*(code *)puVar6[7])(puVar6[8],puVar6,param_1,DAT_001ff264,uVar9);
      return;
    }
  }
LAB_001feff2:
  FUN_001f0fa0(param_1);
  return;
}

