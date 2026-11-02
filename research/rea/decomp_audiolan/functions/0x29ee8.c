// rea decompile_all
// name: FUN_00029ee8
// address: 0x29ee8
// body: available
// range: 0x29ee8-0x29fbd inclusive
// range: 0x29fc4-0x29fd9 inclusive
// range: 0x29fe0-0x2a017 inclusive
// range: 0x2a02e-0x2a045 inclusive
// range: 0x2a05c-0x2a075 inclusive
// range: 0x2a080-0x2a107 inclusive
// range: 0x2a112-0x2a2ad inclusive
// range: 0x2a2b2-0x2a2d5 inclusive
// range: 0x2a520-0x2a907 inclusive
// range: 0x2aa94-0x2ae8f inclusive
// range: 0x2af4c-0x2b2f3 inclusive
// range: 0x2bba2-0x2bd0b inclusive
// range: 0x2bde0-0x2c113 inclusive
// range: 0x2c16c-0x2c1e1 inclusive
// range: 0x2c1ec-0x2c249 inclusive
// range: 0x2c458-0x2c855 inclusive
// range: 0x2ca50-0x2ce59 inclusive
// range: 0x2d08c-0x2d303 inclusive
// range: 0x2d426-0x2d48b inclusive
// range: 0x2d664-0x2da83 inclusive
// range: 0x2dc40-0x2e02b inclusive
// range: 0x2e228-0x2e503 inclusive
// range: 0x2e578-0x2e627 inclusive
// range: 0x2e81c-0x2e9b3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x29fd8 to 0x2a2ae FUN_0002a2ae (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2a1fc to 0x2a2ae FUN_0002a2ae (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2a6a4 to 0x2a2ae FUN_0002a2ae (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2a7d4 to 0x2a2ae FUN_0002a2ae (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2a906 to 0x2a2ae FUN_0002a2ae (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2c0ac to 0x2c114 FUN_0002c114 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2c460 to 0x2c114 FUN_0002c114 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2c4ca to 0x2c114 FUN_0002c114 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2c602 to 0x2c114 FUN_0002c114 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2c66a to 0x2c114 FUN_0002c114 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2c7a0 to 0x2c114 FUN_0002c114 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2c808 to 0x2c114 FUN_0002c114 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, sepa
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0002d3c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00029ee8(int *param_1,int param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  short sVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  uint uVar14;
  char *pcVar15;
  int *piVar16;
  int *piVar17;
  byte *pbVar18;
  uint uVar19;
  char cVar20;
  undefined1 uVar21;
  bool bVar22;
  bool bVar23;
  char cVar24;
  undefined8 uVar25;
  int iVar26;
  int *local_48;
  uint local_44;
  uint local_40;
  byte *local_3c;
  byte *local_38;
  int local_34;
  undefined1 auStack_30 [28];
  
  piVar17 = DAT_0002a2d8;
  iVar7 = *(int *)(param_2 + 0xc);
  puVar8 = (undefined2 *)(iVar7 + 0x30);
  if (*(uint *)(param_2 + 8) < 0x36) {
    iVar9 = FUN_00030b90(DAT_0002a2d8);
    if (iVar9 == 0) goto LAB_0002a108;
    uVar10 = FUN_00029e6c(piVar17);
    FUN_0002c114(uVar10,_DAT_0002a2dc);
  }
  iVar9 = FUN_000358f6(*puVar8);
  if (iVar9 != 1) {
    iVar7 = FUN_00030b90(piVar17);
    if (iVar7 != 0) {
      FUN_00029e6c(piVar17);
      FUN_00029eac(4,s___MM__Received_management_messag_0002a2de + 2);
    }
    goto LAB_0002a108;
  }
  iVar9 = iVar7 + 0x22;
  iVar11 = FUN_0018205c(iVar9,*(int *)(*param_1 + 0x274) + 0xb);
  if ((iVar11 == 0) &&
     (iVar9 = FUN_0018205c(iVar9,DAT_0002a31c), uVar10 = _DAT_0002a338, iVar9 == 0)) {
    iVar7 = FUN_00030b90(_DAT_0002a338);
    if (iVar7 != 0) {
      uVar10 = FUN_00029e6c(uVar10);
      FUN_0002a2ae(uVar10,s__MM__Received_management_message_0002a33b + 1);
      return;
    }
    goto LAB_0002a108;
  }
  iVar9 = FUN_000358f6(puVar8[2]);
  uVar25 = CONCAT44(iVar9 - DAT_0002a320,iVar9);
  cVar24 = SBORROW4(iVar9,DAT_0002a320);
  cVar20 = iVar9 - DAT_0002a320 < 0;
  uVar21 = iVar9 == DAT_0002a320;
  if ((bool)uVar21) {
    uVar25 = FUN_0002d304();
  }
  iVar9 = (int)((ulonglong)uVar25 >> 0x20);
  iVar11 = (int)uVar25;
  if ((bool)uVar21 || cVar20 != cVar24) {
    local_3c = DAT_0002a328;
    iVar9 = iVar11 - DAT_0002a324;
    local_38 = DAT_0002a32c;
    cVar24 = SBORROW4(iVar11,DAT_0002a324);
    cVar20 = iVar11 - DAT_0002a324 < 0;
    uVar21 = iVar11 == DAT_0002a324;
    iVar26 = DAT_0002a334;
    uVar10 = DAT_0002a330;
    if ((bool)uVar21) {
      iVar11 = FUN_0002b94c();
      iVar9 = extraout_r2;
    }
    uVar13 = _DAT_0002a338;
    if (!(bool)uVar21 && cVar20 == cVar24) {
LAB_0002a00a:
      switch(iVar9) {
      default:
        goto switchD_00029fbc_default;
      case 1:
        iVar7 = FUN_00030b90(_DAT_0002bd48);
        if (iVar7 != 0) {
          FUN_00029e6c(_DAT_0002bd48);
          FUN_00029eac(6,s___MM__PORT_DATA_SET_management_m_0002bda2 + 2);
        }
        iVar7 = *(int *)(param_2 + 0xc);
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar7 + 0x2a),*(undefined1 *)(iVar7 + 0x2b));
        if ((uVar12 == *(ushort *)(*param_1 + 2)) || (uVar12 == DAT_0002bd88)) {
          if ((*(byte *)(iVar7 + 0x2e) & 0xf) == 0) {
            iVar9 = iVar7;
            uVar12 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
            local_48 = (int *)(uVar12 & 0xffff);
            local_40 = iVar9 + 0x14;
            cVar20 = *(char *)(iVar7 + 0x2c) - *(char *)(iVar7 + 0x2d);
            iVar7 = *param_1;
            FUN_000358a2(DAT_0002bd98,0,1000);
            pbVar2 = local_38;
            pbVar18 = local_3c;
            local_44 = DAT_0002bd98;
            FUN_0003589a(uVar10,local_40,10);
            *(char *)(iVar26 + 0xc) = cVar20;
            *(char *)(iVar26 + 0xd) = cVar20;
            *(undefined1 *)(iVar26 + 0xe) = 2;
            uVar4 = FUN_0003586c(1);
            *(undefined2 *)pbVar18 = uVar4;
            uVar4 = FUN_0003586c(0x22);
            *(undefined2 *)(pbVar18 + 2) = uVar4;
            uVar4 = FUN_0003586c(DAT_0002bddc);
            *(undefined2 *)(pbVar18 + 4) = uVar4;
            FUN_0003589a(pbVar2,iVar7 + 0x250,8);
            pbVar2[8] = *(byte *)(iVar7 + 600);
            pbVar2[9] = *(byte *)(iVar7 + 0x259);
            pbVar2[10] = *(byte *)(iVar7 + 0x25a);
            pbVar2[0xb] = *(byte *)(iVar7 + 0x25b);
            uVar25 = FUN_0003583c(*(undefined4 *)(iVar7 + 0x260),*(undefined4 *)(iVar7 + 0x264));
            *(undefined8 *)(pbVar2 + 0x10) = uVar25;
            pbVar2[0x18] = *(byte *)(iVar7 + 0x268);
            pbVar2[0x19] = *(byte *)(iVar7 + 0x26b);
            pbVar2[0x1a] = *(byte *)(iVar7 + 0x26c);
            pbVar2[0x1b] = *(byte *)(iVar7 + 0x26d);
            pbVar2[0x1c] = *(byte *)(iVar7 + 0x26e);
            pbVar2[0x1d] = *(byte *)(iVar7 + 0x26f) & 0xf;
            FUN_00030ace(&local_34);
            iVar7 = *param_1;
            FUN_00030b0c(&local_34,DAT_0002c24c,0x56,0xd,*(undefined1 *)(iVar7 + 0x3b4),0,
                         (int)*(short *)(iVar7 + 0x3b6),*(undefined1 *)(iVar7 + 0x3b8),
                         *(undefined1 *)(iVar7 + 0x3e0));
            FUN_0002f5f0(param_1,local_44,local_48,0x56);
            FUN_00033eb4(*(undefined2 *)(*param_1 + 2),&local_34);
            uVar10 = _DAT_0002c250;
            iVar7 = FUN_00030b90(_DAT_0002c250);
            if (iVar7 != 0) {
              uVar10 = FUN_00029e6c(uVar10);
              pcVar15 = s__MM__PORT_DATASET_response_manag_0002c253 + 1;
              goto LAB_0002a6a4;
            }
          }
          else {
            iVar9 = iVar7;
            uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x34));
            cVar20 = *(char *)(iVar7 + 0x2c);
            cVar24 = *(char *)(iVar7 + 0x2d);
            uVar5 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
            FUN_0002fef8(param_1,uVar5,iVar9 + 0x14,cVar20 - cVar24,DAT_0002bd90,uVar4,0);
            iVar7 = FUN_00030b90(piVar17);
            if (iVar7 != 0) {
              FUN_00029e6c(piVar17);
              FUN_00029eac(4,DAT_0002bdd8);
            }
          }
        }
        else {
          iVar7 = FUN_00030b90(piVar17);
          if (iVar7 != 0) {
            FUN_00029e6c(piVar17);
            FUN_00029eac(4,DAT_0002bdd4);
          }
        }
        break;
      case 2:
        iVar7 = FUN_00030b90(_DAT_0002c250);
        if (iVar7 != 0) {
          FUN_00029e6c(_DAT_0002c250);
          FUN_00029eac(6,s_MM__PRIORITY1_management_message_0002c290);
        }
        uVar10 = _DAT_0002c250;
        iVar7 = *(int *)(param_2 + 0xc);
        iVar9 = iVar7 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar7 + 0x2a),*(undefined1 *)(iVar7 + 0x2b));
        if ((uVar12 != *(ushort *)(*param_1 + 2)) && (uVar12 != DAT_0002c2bc)) {
          iVar7 = FUN_00030b90(piVar17);
          if (iVar7 != 0) {
            FUN_00029e6c(piVar17);
            FUN_00029eac(4,DAT_0002c2c0);
          }
          break;
        }
        if ((*(byte *)(iVar7 + 0x2e) & 0xf) == 0) {
          iVar11 = FUN_00030b90(_DAT_0002c250);
          if (iVar11 != 0) {
            FUN_00029e6c(uVar10);
            FUN_00029eac(6,s___MM__PRIORITY1_management_messa_0002c2ca + 2);
          }
          uVar12 = (uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff;
          uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
          FUN_000300cc(param_1,uVar4,iVar7 + 0x14,uVar12);
          iVar7 = FUN_00030b90(uVar10);
        }
        else {
          if ((*(byte *)(iVar7 + 0x2e) & 0xf) != 1) {
            uVar12 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x34));
            uVar12 = uVar12 & 0xffff;
            cVar20 = *(char *)(iVar9 + 0xc);
            cVar24 = *(char *)(iVar9 + 0xd);
            uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
            FUN_0002fef8(param_1,uVar4,iVar7 + 0x14,cVar20 - cVar24,DAT_0002c2c4,uVar12,0);
            iVar7 = FUN_00030b90(piVar17);
            if (iVar7 != 0) {
              FUN_00029e6c(piVar17);
              FUN_00029eac(4,_DAT_0002c2c8);
            }
            break;
          }
          iVar11 = FUN_00030b90(_DAT_0002c250);
          if (iVar11 != 0) {
            FUN_00029e6c(uVar10);
            FUN_00029eac(6,s_MM__PRIORITY1_management_message_0002c334);
          }
          *(undefined1 *)(*(int *)(*param_1 + 0x274) + 4) =
               *(undefined1 *)(*(int *)(param_2 + 0xc) + 0x36);
          uVar12 = (uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff;
          uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
          FUN_000300cc(param_1,uVar4,iVar7 + 0x14,uVar12);
          iVar7 = FUN_00030b90(uVar10);
        }
        if (iVar7 == 0) break;
        uVar10 = FUN_00029e6c(uVar10);
        pcVar15 = s_MM__PRIORITY1_response_managemen_0002c2fc;
        goto LAB_0002a6a4;
      case 3:
        iVar7 = FUN_00030b90(_DAT_0002c250);
        if (iVar7 != 0) {
          FUN_00029e6c(_DAT_0002c250);
          FUN_00029eac(6,s_MM__PRIORITY2_management_message_0002c364);
        }
        uVar10 = _DAT_0002c250;
        iVar9 = *(int *)(param_2 + 0xc);
        iVar7 = iVar9 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar9 + 0x2a),*(undefined1 *)(iVar9 + 0x2b));
        if ((uVar12 != *(ushort *)(*param_1 + 2)) && (uVar12 != DAT_0002c2bc)) {
          iVar7 = FUN_00030b90(piVar17);
          if (iVar7 != 0) {
            uVar10 = FUN_00029e6c(piVar17);
            FUN_0002c114(uVar10,DAT_0002c390);
            return;
          }
          break;
        }
        if ((*(byte *)(iVar9 + 0x2e) & 0xf) == 0) {
LAB_0002c11a:
          uVar10 = _DAT_0002c250;
          iVar11 = FUN_00030b90(_DAT_0002c250);
          if (iVar11 != 0) {
            FUN_00029e6c(uVar10);
            FUN_00029eac(6,s___MM__PRIORITY2_management_messa_0002c396 + 2);
          }
          uVar12 = (uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff;
          uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
          FUN_000301c0(param_1,uVar4,iVar9 + 0x14,uVar12);
          iVar7 = FUN_00030b90(uVar10);
        }
        else {
          if ((*(byte *)(iVar9 + 0x2e) & 0xf) != 1) {
            uVar12 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x34));
            uVar12 = uVar12 & 0xffff;
            cVar20 = *(char *)(iVar7 + 0xc);
            cVar24 = *(char *)(iVar7 + 0xd);
            uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
            iVar7 = DAT_0002c2c4;
            FUN_0002fef8(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24,DAT_0002c2c4,uVar12,0);
            iVar11 = FUN_00030b90(piVar17);
            if (iVar11 == 0) break;
            FUN_00029e6c(piVar17);
            FUN_00029fda(4,_DAT_0002c394);
            goto LAB_0002c11a;
          }
          iVar11 = FUN_00030b90(_DAT_0002c250);
          if (iVar11 != 0) {
            FUN_00029e6c(uVar10);
            FUN_00029eac(6,s_MM__PRIORITY2_management_message_0002c3c8);
          }
          *(undefined1 *)(*(int *)(*param_1 + 0x274) + 10) =
               *(undefined1 *)(*(int *)(param_2 + 0xc) + 0x36);
          uVar12 = (uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff;
          uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
          FUN_000301c0(param_1,uVar4,iVar9 + 0x14,uVar12);
          iVar7 = FUN_00030b90(uVar10);
        }
        if (iVar7 != 0) {
          uVar10 = FUN_00029e6c(uVar10);
          pcVar15 = s_MM__PRIORITY2_response_managemen_0002c3f8;
LAB_0002a7d4:
          FUN_0002a2ae(uVar10,pcVar15);
          return;
        }
        break;
      case 4:
        iVar7 = FUN_00030b90(_DAT_0002c250);
        if (iVar7 != 0) {
          FUN_00029e6c(_DAT_0002c250);
          FUN_00029eac(6,s_MM__DOMAIN_management_message_re_0002c430);
        }
        piVar16 = _DAT_0002c864;
        iVar9 = *(int *)(param_2 + 0xc);
        iVar7 = iVar9 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar9 + 0x2a),*(undefined1 *)(iVar9 + 0x2b));
        if ((uVar12 != *(ushort *)(*param_1 + 2)) && (uVar12 != DAT_0002c2bc)) {
          iVar7 = FUN_00030b90(piVar17);
          if (iVar7 == 0) break;
          uVar13 = FUN_00029e6c(piVar17);
          uVar10 = DAT_0002c858;
          goto LAB_0002c460;
        }
        if ((*(byte *)(iVar9 + 0x2e) & 0xf) == 0) {
          iVar11 = FUN_00030b90(_DAT_0002c864);
          if (iVar11 != 0) {
            FUN_00029e6c(piVar16);
            FUN_00029eac(6,s__MM__DOMAIN_management_message_a_0002c867 + 1);
          }
          uVar12 = (uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff;
          uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
          FUN_0002fb24(param_1,uVar4,iVar9 + 0x14,uVar12);
          iVar7 = FUN_00030b90(piVar16);
          if (iVar7 == 0) break;
        }
        else {
          if ((*(byte *)(iVar9 + 0x2e) & 0xf) != 1) {
            uVar12 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x34));
            uVar12 = uVar12 & 0xffff;
            cVar20 = *(char *)(iVar7 + 0xc);
            cVar24 = *(char *)(iVar7 + 0xd);
            uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
            FUN_0002fef8(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24,DAT_0002c85c,uVar12,0);
            iVar7 = FUN_00030b90(piVar17);
            if (iVar7 != 0) {
              uVar10 = FUN_00029e6c(piVar17);
              FUN_0002c114(uVar10,DAT_0002c860);
              return;
            }
            break;
          }
          iVar11 = FUN_00030b90(_DAT_0002c864);
          if (iVar11 != 0) {
            FUN_00029e6c(piVar16);
            FUN_00029eac(6,s_MM__DOMAIN_management_message_ac_0002c898);
          }
          FUN_00026860(*(undefined4 *)(*param_1 + 0x274),
                       *(undefined1 *)(*(int *)(param_2 + 0xc) + 0x36));
          uVar12 = (uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff;
          uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
          FUN_0002fb24(param_1,uVar4,iVar9 + 0x14,uVar12);
          iVar7 = FUN_00030b90(piVar16);
          bVar23 = iVar7 == 0;
LAB_0002c594:
          if (bVar23) break;
        }
        uVar10 = FUN_00029e6c(piVar16);
        pcVar15 = s_MM__DOMAIN_response_management_m_0002c8c8;
        goto LAB_0002a6a4;
      case 5:
        iVar7 = FUN_00030b90(_DAT_0002c864);
        if (iVar7 != 0) {
          FUN_00029e6c(_DAT_0002c864);
          FUN_00029eac(6,s_MM__SLAVE_ONLY_management_messag_0002c8fc);
        }
        piVar16 = _DAT_0002c864;
        iVar7 = *(int *)(param_2 + 0xc);
        iVar9 = iVar7 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar7 + 0x2a),*(undefined1 *)(iVar7 + 0x2b));
        if ((uVar12 != *(ushort *)(*param_1 + 2)) && (uVar12 != DAT_0002c928)) {
          iVar7 = FUN_00030b90(piVar17);
          bVar23 = iVar7 == 0;
          piVar16 = piVar17;
LAB_0002c5f8:
          if (!bVar23) {
            uVar13 = FUN_00029e6c(piVar16);
            uVar10 = DAT_0002c92c;
LAB_0002c602:
            FUN_0002c114(uVar13,uVar10);
            return;
          }
          break;
        }
        if ((*(byte *)(iVar7 + 0x2e) & 0xf) == 0) {
          iVar11 = FUN_00030b90(_DAT_0002c864);
          if (iVar11 != 0) {
            FUN_00029e6c(piVar16);
            FUN_00029eac(6,s___MM__SLAVE_ONLY_management_mess_0002c932 + 2);
          }
          uVar12 = (uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff;
          uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
          FUN_000302b4(param_1,uVar4,iVar7 + 0x14,uVar12);
          iVar7 = FUN_00030b90(piVar16);
          bVar23 = true;
          if (iVar7 == 0) goto LAB_0002c5f8;
        }
        else {
          if ((*(byte *)(iVar7 + 0x2e) & 0xf) != 1) {
            uVar12 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x34));
            uVar12 = uVar12 & 0xffff;
            cVar20 = *(char *)(iVar9 + 0xc);
            cVar24 = *(char *)(iVar9 + 0xd);
            uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
            FUN_0002fef8(param_1,uVar4,iVar7 + 0x14,cVar20 - cVar24,DAT_0002c85c,uVar12,0);
            iVar7 = FUN_00030b90(piVar17);
            bVar23 = iVar7 == 0;
            piVar16 = piVar17;
            if (!bVar23) {
              uVar10 = FUN_00029e6c(piVar17);
              FUN_0002c114(uVar10,_DAT_0002c930);
              return;
            }
            goto LAB_0002c594;
          }
          iVar11 = FUN_00030b90(_DAT_0002c864);
          if (iVar11 != 0) {
            FUN_00029e6c(piVar16);
            FUN_00029eac(6,s_MM__SLAVE_ONLY_management_messag_0002c9a0);
          }
          *(undefined1 *)(*(int *)(*param_1 + 0x274) + 0x14) =
               *(undefined1 *)(*(int *)(param_2 + 0xc) + 0x36);
          uVar12 = (uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff;
          uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
          FUN_000302b4(param_1,uVar4,iVar7 + 0x14,uVar12);
          iVar7 = FUN_00030b90(piVar16);
          if (iVar7 == 0) break;
        }
        uVar10 = FUN_00029e6c(piVar16);
        pcVar15 = s_MM__SLAVE_ONLY_response_manageme_0002c968;
        goto LAB_0002a6a4;
      case 6:
        iVar7 = FUN_00030b90(_DAT_0002c864);
        if (iVar7 != 0) {
          FUN_00029e6c(_DAT_0002c864);
          FUN_00029eac(6,s_MM__LOG_ANNOUNCE_INTERVAL_manage_0002c9d4);
        }
        piVar16 = _DAT_0002ce60;
        piVar1 = _DAT_0002c864;
        iVar9 = *(int *)(param_2 + 0xc);
        iVar7 = iVar9 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar9 + 0x2a),*(undefined1 *)(iVar9 + 0x2b));
        if ((uVar12 == *(ushort *)(*param_1 + 2)) || (uVar12 == DAT_0002c928)) {
          if ((*(byte *)(iVar9 + 0x2e) & 0xf) == 0) {
            iVar11 = FUN_00030b90(_DAT_0002c864);
            if (iVar11 != 0) {
              FUN_00029e6c(piVar1);
              FUN_00029eac(6,s___MM__log_announce_interval_mana_0002ca12 + 2);
            }
            uVar12 = (uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff;
            uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
            FUN_0002fc18(param_1,uVar4,iVar9 + 0x14,uVar12);
            iVar7 = FUN_00030b90(piVar1);
            piVar16 = piVar1;
          }
          else {
            if ((*(byte *)(iVar9 + 0x2e) & 0xf) != 1) {
              uVar12 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x34));
              uVar12 = uVar12 & 0xffff;
              cVar20 = *(char *)(iVar7 + 0xc);
              cVar24 = *(char *)(iVar7 + 0xd);
              uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
              FUN_0002fef8(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24,DAT_0002c85c,uVar12,0);
              iVar7 = FUN_00030b90(piVar17);
              if (iVar7 != 0) {
                uVar10 = FUN_00029e6c(piVar17);
                FUN_0002c114(uVar10,_DAT_0002ca10);
                return;
              }
              break;
            }
            iVar11 = FUN_00030b90(_DAT_0002ce60);
            if (iVar11 != 0) {
              FUN_00029e6c(piVar16);
              FUN_00029eac(6,s__MM__log_announce_interval_manag_0002ce63 + 1);
            }
            FUN_0003548c(*param_1,(int)*(char *)(*(int *)(param_2 + 0xc) + 0x36));
            uVar12 = (uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff;
            uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
            FUN_0002fc18(param_1,uVar4,iVar9 + 0x14,uVar12);
            iVar7 = FUN_00030b90(piVar16);
          }
          if (iVar7 != 0) {
            uVar10 = FUN_00029e6c(piVar16);
            pcVar15 = DAT_0002ce5c;
            goto LAB_0002a6a4;
          }
        }
        else {
          iVar7 = FUN_00030b90(piVar17);
          if (iVar7 != 0) {
            uVar10 = FUN_00029e6c(piVar17);
            FUN_0002c114(uVar10,DAT_0002ca0c);
            return;
          }
        }
        break;
      case 7:
        iVar7 = FUN_00030b90(_DAT_0002ce60);
        if (iVar7 != 0) {
          FUN_00029e6c(_DAT_0002ce60);
          FUN_00029eac(6,s_MM__ANNOUNCE_RECEIPT_TIMEOUT_man_0002cea0);
        }
        piVar16 = _DAT_0002ce60;
        iVar9 = *(int *)(param_2 + 0xc);
        iVar7 = iVar9 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar9 + 0x2a),*(undefined1 *)(iVar9 + 0x2b));
        if ((uVar12 != *(ushort *)(*param_1 + 2)) && (uVar12 != DAT_0002cedc)) {
          iVar7 = FUN_00030b90(piVar17);
          if (iVar7 != 0) {
            uVar13 = FUN_00029e6c(piVar17);
            uVar10 = DAT_0002cee0;
            goto LAB_0002c460;
          }
          break;
        }
        if ((*(byte *)(iVar9 + 0x2e) & 0xf) == 0) {
          iVar11 = FUN_00030b90(_DAT_0002ce60);
          if (iVar11 != 0) {
            FUN_00029e6c(piVar16);
            FUN_00029eac(6,s___MM__ANNOUNCE_RECEIPT_TIMEOUT_m_0002ceea + 2);
          }
          uVar12 = (uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff;
          uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
          FUN_0002f850(param_1,uVar4,iVar9 + 0x14,uVar12);
          iVar7 = FUN_00030b90(piVar16);
          if (iVar7 == 0) break;
        }
        else {
          if ((*(byte *)(iVar9 + 0x2e) & 0xf) != 1) {
            uVar12 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x34));
            uVar12 = uVar12 & 0xffff;
            cVar20 = *(char *)(iVar7 + 0xc);
            cVar24 = *(char *)(iVar7 + 0xd);
            uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
            FUN_0002fef8(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24,DAT_0002cee4,uVar12,0);
            iVar7 = FUN_00030b90(piVar17);
            if (iVar7 != 0) {
              uVar13 = FUN_00029e6c(piVar17);
              uVar10 = _DAT_0002cee8;
              goto LAB_0002c460;
            }
            break;
          }
          iVar11 = FUN_00030b90(_DAT_0002ce60);
          if (iVar11 != 0) {
            FUN_00029e6c(piVar16);
            FUN_00029eac(6,s_MM__ANNOUNCE_RECEIPT_TIMEOUT_man_0002cf2c);
          }
          FUN_00035400(*param_1,*(undefined1 *)(*(int *)(param_2 + 0xc) + 0x36));
          uVar12 = (uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff;
          uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
          FUN_0002f850(param_1,uVar4,iVar9 + 0x14,uVar12);
          iVar7 = FUN_00030b90(piVar16);
          bVar23 = iVar7 == 0;
LAB_0002cc62:
          if (bVar23) break;
        }
        uVar10 = FUN_00029e6c(piVar16);
        pcVar15 = _DAT_0002cf6c;
        goto LAB_0002a6a4;
      case 8:
        iVar7 = FUN_00030b90(_DAT_0002ce60);
        if (iVar7 != 0) {
          FUN_00029e6c(_DAT_0002ce60);
          FUN_00029eac(6,s___MM__LOG_SYNC_INTERVAL_manageme_0002cf6e + 2);
        }
        piVar16 = _DAT_0002ce60;
        iVar7 = *(int *)(param_2 + 0xc);
        iVar9 = iVar7 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar7 + 0x2a),*(undefined1 *)(iVar7 + 0x2b));
        if ((uVar12 != *(ushort *)(*param_1 + 2)) && (uVar12 != DAT_0002cedc)) {
          iVar7 = FUN_00030b90(piVar17);
          if (iVar7 == 0) break;
          uVar13 = FUN_00029e6c(piVar17);
          uVar10 = DAT_0002cfa4;
          goto LAB_0002c602;
        }
        if ((*(byte *)(iVar7 + 0x2e) & 0xf) == 0) {
          iVar11 = FUN_00030b90(_DAT_0002ce60);
          if (iVar11 != 0) {
            FUN_00029e6c(piVar16);
            FUN_00029eac(6,s___MM__log_sync_interval_manageme_0002cfaa + 2);
          }
          uVar12 = (uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff;
          uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
          FUN_0002fe04(param_1,uVar4,iVar7 + 0x14,uVar12);
          iVar7 = FUN_00030b90(piVar16);
        }
        else {
          if ((*(byte *)(iVar7 + 0x2e) & 0xf) != 1) {
            uVar12 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x34));
            uVar12 = uVar12 & 0xffff;
            cVar20 = *(char *)(iVar9 + 0xc);
            cVar24 = *(char *)(iVar9 + 0xd);
            uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
            FUN_0002fef8(param_1,uVar4,iVar7 + 0x14,cVar20 - cVar24,DAT_0002cee4,uVar12,0);
            iVar7 = FUN_00030b90(piVar17);
            bVar23 = iVar7 == 0;
            piVar16 = piVar17;
            if (!bVar23) {
              uVar13 = FUN_00029e6c(piVar17);
              uVar10 = _DAT_0002cfa8;
              goto LAB_0002c602;
            }
            goto LAB_0002cc62;
          }
          iVar11 = FUN_00030b90(_DAT_0002ce60);
          if (iVar11 != 0) {
            FUN_00029e6c(piVar16);
            FUN_00029eac(6,s_MM__log_sync_interval_management_0002cfe4);
          }
          FUN_00035582(*param_1,(int)*(char *)(*(int *)(param_2 + 0xc) + 0x36));
          uVar12 = (uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff;
          uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
          FUN_0002fe04(param_1,uVar4,iVar7 + 0x14,uVar12);
          iVar7 = FUN_00030b90(piVar16);
        }
        if (iVar7 != 0) {
          uVar10 = FUN_00029e6c(piVar16);
          pcVar15 = s_MM__log_sync_interval_response_m_0002d01c;
          goto LAB_0002a6a4;
        }
        break;
      case 9:
        iVar7 = FUN_00030b90(_DAT_0002ce60);
        if (iVar7 != 0) {
          FUN_00029e6c(_DAT_0002ce60);
          FUN_00029eac(6,s_MM__VERSION_NUMBER_management_me_0002d05c);
        }
        piVar16 = _DAT_0002d498;
        iVar9 = *(int *)(param_2 + 0xc);
        iVar7 = iVar9 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar9 + 0x2a),*(undefined1 *)(iVar9 + 0x2b));
        if ((uVar12 == *(ushort *)(*param_1 + 2)) || (uVar12 == DAT_0002cedc)) {
          if ((*(byte *)(iVar9 + 0x2e) & 0xf) == 0) {
            iVar11 = FUN_00030b90(_DAT_0002d498);
            if (iVar11 != 0) {
              FUN_00029e6c(piVar16);
              FUN_00029eac(6,s__MM__VERSION_NUMBER_management_m_0002d49b + 1);
            }
            uVar12 = (uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff;
            uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
            FUN_00030990(param_1,uVar4,iVar9 + 0x14,uVar12);
            iVar7 = FUN_00030b90(piVar16);
          }
          else {
            if ((*(byte *)(iVar9 + 0x2e) & 0xf) != 1) {
              uVar12 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x34));
              uVar12 = uVar12 & 0xffff;
              local_48 = (int *)((uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff)
              ;
              uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
              FUN_0002fef8(param_1,uVar4,iVar9 + 0x14,local_48,DAT_0002d490,uVar12,0);
              iVar7 = FUN_00030b90(piVar17);
              if (iVar7 != 0) {
                uVar13 = FUN_00029e6c(piVar17);
                uVar10 = DAT_0002d494;
                goto LAB_0002c460;
              }
              break;
            }
            iVar11 = FUN_00030b90(_DAT_0002d498);
            if (iVar11 != 0) {
              FUN_00029e6c(piVar16);
              FUN_00029eac(6,s_MM__VERSION_NUMBER_management_me_0002d510);
            }
            *(byte *)(*param_1 + 0x26f) = *(byte *)(*(int *)(param_2 + 0xc) + 0x36) & 0xf;
            uVar12 = (uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff;
            uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
            FUN_00030990(param_1,uVar4,iVar9 + 0x14,uVar12);
            iVar7 = FUN_00030b90(piVar16);
          }
          if (iVar7 != 0) {
            uVar10 = FUN_00029e6c(piVar16);
            pcVar15 = s_MM__VERSION_NUMBER_response_mana_0002d4d4;
            goto LAB_0002a6a4;
          }
        }
        else {
          iVar7 = FUN_00030b90(piVar17);
          if (iVar7 != 0) {
            uVar13 = FUN_00029e6c(piVar17);
            uVar10 = DAT_0002d48c;
            goto LAB_0002c460;
          }
        }
        break;
      case 10:
        iVar7 = FUN_00030b90(_DAT_0002d498);
        if (iVar7 != 0) {
          FUN_00029e6c(_DAT_0002d498);
          FUN_00029eac(6,s_MM__ENABLE_PORT_management_messa_0002d548);
        }
        iVar7 = *(int *)(param_2 + 0xc);
        iVar9 = iVar7 + 0x30;
        iVar11 = iVar7 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar7 + 0x2a),*(undefined1 *)(iVar7 + 0x2b));
        if ((uVar12 == *(ushort *)(*param_1 + 2)) || (uVar12 == DAT_0002d578)) {
          if ((*(byte *)(iVar7 + 0x2e) & 0xf) != 3) {
            uVar12 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x34));
            uVar12 = uVar12 & 0xffff;
            cVar20 = *(char *)(iVar11 + 0xc);
            cVar24 = *(char *)(iVar11 + 0xd);
            uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
            FUN_0002fef8(param_1,uVar4,iVar7 + 0x14,cVar20 - cVar24,DAT_0002d490,uVar12,0);
            iVar7 = FUN_00030b90(piVar17);
            if (iVar7 != 0) {
              uVar13 = FUN_00029e6c(piVar17);
              uVar10 = _DAT_0002d580;
              goto LAB_0002c460;
            }
            break;
          }
          FUN_00027070(*(undefined4 *)(*param_1 + 4),1);
          uVar12 = FUN_000358f6(*(undefined2 *)(iVar9 + 4));
          piVar17 = (int *)(uVar12 & 0xffff);
          uVar12 = (uint)*(byte *)(iVar11 + 0xc) - (uint)*(byte *)(iVar11 + 0xd) & 0xff;
          uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
          FUN_0002f78c(param_1,uVar4,iVar7 + 0x14,uVar12,piVar17);
          param_1 = _DAT_0002d498;
          iVar7 = FUN_00030b90(_DAT_0002d498);
          bVar23 = iVar7 == 0;
          goto LAB_0002d2f8;
        }
        iVar7 = FUN_00030b90(piVar17);
        bVar22 = iVar7 == 0;
LAB_0002d23a:
        if (bVar22) break;
        uVar13 = FUN_00029e6c(piVar17);
        uVar10 = DAT_0002d57c;
        goto LAB_0002c460;
      }
      goto LAB_0002a108;
    }
    if (iVar11 == 5) {
      iVar7 = FUN_00030b90(_DAT_0002ae90);
      if (iVar7 != 0) {
        FUN_00029e6c(_DAT_0002ae90);
        FUN_00029eac(6,s__MM__INITIALIZE_management_messa_0002ae93 + 1);
      }
      iVar7 = *(int *)(param_2 + 0xc);
      puVar8 = (undefined2 *)(iVar7 + 0x36);
      if (*(uint *)(param_2 + 8) < 0x38) {
        iVar7 = FUN_00030b90(piVar17);
        if (iVar7 != 0) {
          FUN_00029e6c(piVar17);
          FUN_00029eac(4,DAT_0002aec0);
        }
      }
      else {
        iVar9 = iVar7 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar7 + 0x2a),*(undefined1 *)(iVar7 + 0x2b));
        if ((uVar12 == *(ushort *)(*param_1 + 2)) || (uVar12 == DAT_0002aec4)) {
          if ((*(byte *)(iVar7 + 0x2e) & 0xf) == 3) {
            iVar11 = FUN_000358f6(*puVar8);
            if ((iVar11 == 0) || (uVar12 = FUN_000358f6(*puVar8), DAT_0002aed4 < uVar12)) {
              uVar4 = FUN_000358f6(*puVar8);
              FUN_00027214(*(undefined4 *)(*param_1 + 4),uVar4);
              uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x34));
              uVar12 = (uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff;
              uVar5 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
              FUN_0002f78c(param_1,uVar5,iVar7 + 0x14,uVar12,uVar4);
              uVar10 = _DAT_0002ae90;
              iVar7 = FUN_00030b90(_DAT_0002ae90);
              if (iVar7 != 0) {
                uVar10 = FUN_00029e6c(uVar10);
                pcVar15 = s___MM__INITIALIZE_acknowledge_man_0002aeda + 2;
                goto LAB_0002a6a4;
              }
            }
            else {
              iVar7 = FUN_00030b90(piVar17);
              if (iVar7 != 0) {
                FUN_00029e6c(piVar17);
                FUN_00029eac(4,_DAT_0002aed8);
              }
            }
          }
          else {
            local_44 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x34));
            local_44 = local_44 & 0xffff;
            cVar20 = *(char *)(iVar9 + 0xc);
            cVar24 = *(char *)(iVar9 + 0xd);
            uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
            FUN_0002fef8(param_1,uVar4,iVar7 + 0x14,cVar20 - cVar24,DAT_0002aecc,local_44,0);
            iVar7 = FUN_00030b90(piVar17);
            if (iVar7 != 0) {
              FUN_00029e6c(piVar17);
              FUN_00029eac(4,DAT_0002aed0);
            }
          }
        }
        else {
          iVar7 = FUN_00030b90(piVar17);
          if (iVar7 != 0) {
            FUN_00029e6c(piVar17);
            FUN_00029eac(4,DAT_0002aec8);
          }
        }
      }
      goto LAB_0002a108;
    }
    if (iVar11 < 6) {
      switch(iVar11) {
      case 0:
        iVar7 = FUN_00030b90(_DAT_0002a338);
        if (iVar7 != 0) {
          FUN_00029e6c(_DAT_0002a338);
          FUN_00029eac(6,s___MM__NULL_MANAGEMENT_management_0002a382 + 2);
        }
        uVar10 = _DAT_0002a338;
        iVar9 = *(int *)(param_2 + 0xc);
        iVar7 = iVar9 + 0x30;
        bVar3 = *(byte *)(iVar9 + 0x2e) & 0xf;
        if ((*(byte *)(iVar9 + 0x2e) & 0xf) == 0) {
          iVar7 = FUN_00030b90(_DAT_0002a338);
          if (iVar7 != 0) {
            FUN_00029e6c(uVar10);
            FUN_00029eac(6,s___MM__NULL_MANAGEMENT_management_0002a3be + 2);
          }
          cVar20 = *(char *)(iVar9 + 0x2c);
          cVar24 = *(char *)(iVar9 + 0x2d);
          uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
          FUN_00030008(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24);
          iVar7 = FUN_00030b90(uVar10);
        }
        else {
          if (bVar3 != 1) {
            if (bVar3 == 3) {
              iVar11 = FUN_00030b90(_DAT_0002a338);
              if (iVar11 != 0) {
                FUN_00029e6c(_DAT_0002a338);
                FUN_00029eac(6,s_MM__NULL_MANAGEMENT_management_m_0002a470);
              }
              uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 4));
              cVar20 = *(char *)(iVar9 + 0x2c);
              cVar24 = *(char *)(iVar9 + 0x2d);
              uVar5 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
              FUN_0002f78c(param_1,uVar5,iVar9 + 0x14,cVar20 - cVar24,uVar4);
              uVar10 = _DAT_0002a338;
              iVar7 = FUN_00030b90(_DAT_0002a338);
              if (iVar7 != 0) {
                FUN_00029e6c(uVar10);
                FUN_00029fda(6,s_MM__NULL_MANAGEMENT_acknowledge_m_0002a4ac);
                return;
              }
            }
            else {
              uVar12 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x34));
              uVar12 = uVar12 & 0xffff;
              cVar20 = *(char *)(iVar9 + 0x2c);
              cVar24 = *(char *)(iVar9 + 0x2d);
              uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
              FUN_0002fef8(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24,DAT_0002a3b8,uVar12,0);
              iVar7 = FUN_00030b90(piVar17);
              if (iVar7 != 0) {
                FUN_00029e6c(piVar17);
                FUN_00029eac(4,_DAT_0002a3bc);
              }
            }
            break;
          }
          iVar7 = FUN_00030b90(_DAT_0002a338);
          if (iVar7 != 0) {
            FUN_00029e6c(uVar10);
            FUN_00029eac(6,s_MM__NULL_MANAGEMENT_management_m_0002a438);
          }
          cVar20 = *(char *)(iVar9 + 0x2c);
          cVar24 = *(char *)(iVar9 + 0x2d);
          uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
          FUN_00030008(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24);
          iVar7 = FUN_00030b90(uVar10);
        }
        if (iVar7 != 0) {
          uVar10 = FUN_00029e6c(uVar10);
          FUN_0002a2ae(uVar10,s_MM__NULL_MANAGEMENT_response_man_0002a3f8);
          return;
        }
        break;
      case 1:
        iVar7 = FUN_00030b90(_DAT_0002a338);
        if (iVar7 != 0) {
          FUN_00029e6c(uVar13);
          FUN_00029eac(6,s_MM__CLOCK_DESCRIPTION_management_0002a4ec);
        }
        FUN_0002f154(param_1,param_2);
        break;
      case 2:
        iVar7 = FUN_00030b90(_DAT_0002a908);
        if (iVar7 != 0) {
          FUN_00029e6c(_DAT_0002a908);
          FUN_00029eac(6,s__MM__USER_DESCRIPTION_management_0002a90b + 1);
        }
        uVar10 = _DAT_0002a908;
        iVar9 = *(int *)(param_2 + 0xc);
        iVar7 = iVar9 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar9 + 0x2a),*(undefined1 *)(iVar9 + 0x2b));
        if ((uVar12 == *(ushort *)(*param_1 + 2)) || (uVar12 == DAT_0002a940)) {
          if ((*(byte *)(iVar9 + 0x2e) & 0xf) == 0) {
            iVar11 = FUN_00030b90(_DAT_0002a908);
            if (iVar11 != 0) {
              FUN_00029e6c(uVar10);
              FUN_00029eac(6,s___MM__USER_DESCRIPTION_managemen_0002a94e + 2);
            }
            cVar20 = *(char *)(iVar7 + 0xc);
            cVar24 = *(char *)(iVar7 + 0xd);
            uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
            FUN_000306d8(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24);
            iVar7 = FUN_00030b90(uVar10);
          }
          else {
            if ((*(byte *)(iVar9 + 0x2e) & 0xf) != 1) {
              uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x34));
              cVar20 = *(char *)(iVar7 + 0xc);
              cVar24 = *(char *)(iVar7 + 0xd);
              uVar5 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
              FUN_0002fef8(param_1,uVar5,iVar9 + 0x14,cVar20 - cVar24,DAT_0002a948,uVar4,0);
              iVar7 = FUN_00030b90(piVar17);
              if (iVar7 != 0) {
                FUN_00029e6c(piVar17);
                FUN_00029eac(4,_DAT_0002a94c);
              }
              break;
            }
            iVar11 = FUN_00030b90(_DAT_0002a908);
            if (iVar11 != 0) {
              FUN_00029e6c(uVar10);
              FUN_00029eac(6,s_MM__USER_DESCRIPTION_management_m_0002a988);
            }
            FUN_00026238(*(int *)(param_2 + 0xc) + 0x36);
            cVar20 = *(char *)(iVar7 + 0xc);
            cVar24 = *(char *)(iVar7 + 0xd);
            uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
            FUN_000306d8(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24);
            iVar7 = FUN_00030b90(uVar10);
          }
          if (iVar7 != 0) {
            uVar10 = FUN_00029e6c(uVar10);
            pcVar15 = s_MM__USER_DESCRIPTION_response_ma_0002a9c0;
            goto LAB_0002a6a4;
          }
        }
        else {
          iVar7 = FUN_00030b90(piVar17);
          if (iVar7 != 0) {
            FUN_00029e6c(piVar17);
            FUN_00029eac(4,DAT_0002a944);
          }
        }
        break;
      case 3:
        iVar7 = FUN_00030b90(_DAT_0002a908);
        if (iVar7 != 0) {
          FUN_00029e6c(_DAT_0002a908);
          FUN_00029eac(6,s_MM__SAVE_IN_NON_VOLATILE_STORAGE_0002aa00);
        }
        iVar11 = *(int *)(param_2 + 0xc);
        iVar7 = iVar11 + 0x30;
        iVar9 = iVar11 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar11 + 0x2a),*(undefined1 *)(iVar11 + 0x2b));
        if ((uVar12 != *(ushort *)(*param_1 + 2)) && (uVar12 != DAT_0002a940)) {
          iVar7 = FUN_00030b90(piVar17);
          if (iVar7 != 0) {
            FUN_00029e6c(piVar17);
            FUN_00029eac(4,DAT_0002aa40);
          }
          break;
        }
        if ((*(byte *)(iVar11 + 0x2e) & 0xf) != 3) {
          uVar12 = FUN_000358f6(*(undefined2 *)(iVar11 + 0x34));
          uVar12 = uVar12 & 0xffff;
          local_48 = (int *)((uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff);
          uVar4 = FUN_000358f6(*(undefined2 *)(iVar11 + 0x1e));
          FUN_0002fef8(param_1,uVar4,iVar11 + 0x14,local_48,DAT_0002a948,uVar12,0);
          iVar7 = FUN_00030b90(piVar17);
          if (iVar7 != 0) {
            FUN_00029e6c(piVar17);
            FUN_00029eac(4,DAT_0002aa44);
          }
          break;
        }
        FUN_0002723e(*(undefined4 *)(*param_1 + 4));
        uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 4));
        uVar12 = (uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff;
        uVar5 = FUN_000358f6(*(undefined2 *)(iVar11 + 0x1e));
        FUN_0002f78c(param_1,uVar5,iVar11 + 0x14,uVar12,uVar4);
        uVar10 = _DAT_0002a908;
        iVar7 = FUN_00030b90(_DAT_0002a908);
        if (iVar7 == 0) break;
        uVar10 = FUN_00029e6c(uVar10);
        pcVar15 = _DAT_0002aa48;
        goto LAB_0002a7d4;
      case 4:
        iVar7 = FUN_00030b90(_DAT_0002a908);
        if (iVar7 != 0) {
          FUN_00029e6c(_DAT_0002a908);
          FUN_00029eac(6,s___MM__RESET_NON_VOLATILE_STORAGE_0002aa4a + 2);
        }
        iVar11 = *(int *)(param_2 + 0xc);
        iVar7 = iVar11 + 0x30;
        iVar9 = iVar11 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar11 + 0x2a),*(undefined1 *)(iVar11 + 0x2b));
        if ((uVar12 == *(ushort *)(*param_1 + 2)) || (uVar12 == DAT_0002a940)) {
          if ((*(byte *)(iVar11 + 0x2e) & 0xf) == 3) {
            FUN_00027236(*(undefined4 *)(*param_1 + 4));
            uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 4));
            uVar12 = (uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff;
            uVar5 = FUN_000358f6(*(undefined2 *)(iVar11 + 0x1e));
            FUN_0002f78c(param_1,uVar5,iVar11 + 0x14,uVar12,uVar4);
            uVar10 = _DAT_0002a908;
            iVar7 = FUN_00030b90(_DAT_0002a908);
            if (iVar7 != 0) {
              uVar10 = FUN_00029e6c(uVar10);
              pcVar15 = DAT_0002aa90;
LAB_0002a906:
              FUN_0002a2ae(uVar10,pcVar15);
              return;
            }
          }
          else {
            uVar12 = FUN_000358f6(*(undefined2 *)(iVar11 + 0x34));
            uVar12 = uVar12 & 0xffff;
            local_48 = (int *)((uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff);
            uVar4 = FUN_000358f6(*(undefined2 *)(iVar11 + 0x1e));
            FUN_0002fef8(param_1,uVar4,iVar11 + 0x14,local_48,DAT_0002a948,uVar12,0);
            iVar7 = FUN_00030b90(piVar17);
            if (iVar7 != 0) {
              FUN_00029e6c(piVar17);
              FUN_00029eac(4,DAT_0002aa8c);
            }
          }
        }
        else {
          iVar7 = FUN_00030b90(piVar17);
          if (iVar7 != 0) {
            FUN_00029e6c(piVar17);
            FUN_00029eac(4,DAT_0002aa88);
          }
        }
        break;
      default:
        goto switchD_00029fbc_default;
      }
      goto LAB_0002a108;
    }
    iVar9 = iVar11 + -0x2000;
    if (iVar11 == 0x2000) {
      iVar7 = FUN_00030b90(_DAT_0002b350);
      if (iVar7 != 0) {
        FUN_00029e6c(_DAT_0002b350);
        FUN_00029eac(6,s_MM__DEFAULT_DATA_SET_management_m_0002b40c);
      }
      iVar7 = *(int *)(param_2 + 0xc);
      uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar7 + 0x2a),*(undefined1 *)(iVar7 + 0x2b));
      if ((uVar12 == *(ushort *)(*param_1 + 2)) || (uVar12 == DAT_0002b3c0)) {
        if ((*(byte *)(iVar7 + 0x2e) & 0xf) == 0) {
          iVar9 = iVar7;
          local_44 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
          local_44 = local_44 & 0xffff;
          iVar9 = iVar9 + 0x14;
          cVar20 = *(char *)(iVar7 + 0x2c) - *(char *)(iVar7 + 0x2d);
          pcVar15 = *(char **)(*param_1 + 0x274);
          FUN_000358a2(s____rI_MM__DEFAULT_DATASET_respon_0002b44a._2_4_,0,1000);
          pbVar2 = local_38;
          pbVar18 = local_3c;
          local_48 = (int *)s____rI_MM__DEFAULT_DATASET_respon_0002b44a._2_4_;
          local_40 = 0x4c;
          FUN_0003589a(uVar10,iVar9,10);
          *(char *)(iVar26 + 0xc) = cVar20;
          *(char *)(iVar26 + 0xd) = cVar20;
          *(undefined1 *)(iVar26 + 0xe) = 2;
          uVar4 = FUN_0003586c(1);
          *(undefined2 *)pbVar18 = uVar4;
          uVar4 = FUN_0003586c(0x18);
          *(undefined2 *)(pbVar18 + 2) = uVar4;
          uVar4 = FUN_0003586c(0x2000);
          *(undefined2 *)(pbVar18 + 4) = uVar4;
          if (*pcVar15 != '\0') {
            *pbVar2 = *pbVar2 | 1;
          }
          if (pcVar15[0x14] != '\0') {
            *pbVar2 = *pbVar2 | 2;
          }
          FUN_0003589a(pbVar2 + 0xb,pcVar15 + 0xb,8);
          uVar4 = FUN_0003586c(*(undefined2 *)(pcVar15 + 2));
          *(undefined2 *)(pbVar2 + 2) = uVar4;
          pbVar2[7] = pcVar15[7];
          pbVar2[6] = pcVar15[6];
          uVar4 = FUN_0003586c(*(undefined2 *)(pcVar15 + 8));
          *(undefined2 *)(pbVar2 + 8) = uVar4;
          pbVar2[4] = pcVar15[4];
          pbVar2[10] = pcVar15[10];
          pbVar2[0x13] = pcVar15[0x13];
          FUN_00030ace(&local_34);
          iVar7 = *param_1;
          FUN_00030b0c(&local_34,s____rI_MM__DEFAULT_DATASET_respon_0002b44a._2_4_,local_40,0xd,
                       *(undefined1 *)(iVar7 + 0x3b4),0,(int)*(short *)(iVar7 + 0x3b6),
                       *(undefined1 *)(iVar7 + 0x3b8),*(undefined1 *)(iVar7 + 0x3e0));
          FUN_0002f5f0(param_1,local_48,local_44,local_40);
          FUN_00033eb4(*(undefined2 *)(*param_1 + 2),&local_34);
          uVar10 = _DAT_0002b350;
          iVar7 = FUN_00030b90(_DAT_0002b350);
          if (iVar7 != 0) {
            uVar10 = FUN_00029e6c(uVar10);
            pcVar15 = s____rI_MM__DEFAULT_DATASET_respon_0002b44a + 6;
            goto LAB_0002a6a4;
          }
        }
        else {
          iVar9 = iVar7;
          uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x34));
          cVar20 = *(char *)(iVar7 + 0x2c);
          cVar24 = *(char *)(iVar7 + 0x2d);
          uVar5 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
          FUN_0002fef8(param_1,uVar5,iVar9 + 0x14,cVar20 - cVar24,DAT_0002b444,uVar4,0);
          iVar7 = FUN_00030b90(piVar17);
          if (iVar7 != 0) {
            FUN_00029e6c(piVar17);
            FUN_00029eac(4,_DAT_0002b448);
          }
        }
      }
      else {
        iVar7 = FUN_00030b90(piVar17);
        if (iVar7 != 0) {
          FUN_00029e6c(piVar17);
          FUN_00029eac(4,DAT_0002b440);
        }
      }
      goto LAB_0002a108;
    }
    if (iVar11 < 0x2001) {
      if (iVar11 == 6) {
        iVar7 = FUN_00030b90(_DAT_0002ae90);
        if (iVar7 != 0) {
          FUN_00029e6c(_DAT_0002ae90);
          FUN_00029eac(6,s_MM__FAULT_LOG_management_message_0002af18);
        }
        iVar7 = *(int *)(param_2 + 0xc);
        if ((*(byte *)(iVar7 + 0x2e) & 0xf) == 0) {
          iVar9 = iVar7;
          local_48 = param_1;
          local_40 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
          local_40 = local_40 & 0xffff;
          iVar9 = iVar9 + 0x14;
          cVar20 = *(char *)(iVar7 + 0x2c) - *(char *)(iVar7 + 0x2d);
          iVar7 = FUN_00030bb8();
          FUN_000358a2(DAT_0002af48,0,1000);
          pbVar18 = local_3c;
          local_34 = DAT_0002af48;
          uVar14 = 0x38;
          FUN_0003589a(uVar10,iVar9,10);
          *(char *)(iVar26 + 0xc) = cVar20;
          *(char *)(iVar26 + 0xd) = cVar20;
          *(undefined1 *)(iVar26 + 0xe) = 2;
          uVar4 = FUN_0003586c(1);
          *(undefined2 *)pbVar18 = uVar4;
          uVar4 = FUN_0003586c(4);
          *(undefined2 *)(pbVar18 + 2) = uVar4;
          uVar4 = FUN_0003586c(6);
          *(undefined2 *)(pbVar18 + 4) = uVar4;
          uVar12 = 0;
          if (iVar7 != 0) {
            uVar12 = FUN_00029c9a();
            uVar12 = uVar12 & 0xffff;
          }
          uVar4 = FUN_0003586c();
          uVar19 = 0;
          *(undefined2 *)local_38 = uVar4;
          if (uVar12 != 0) {
            do {
              puVar8 = (undefined2 *)FUN_00029c38(iVar7,uVar19);
              uVar4 = FUN_0003586c(*puVar8);
              local_44 = CONCAT22(local_44._2_2_,uVar4);
              FUN_0003589a(DAT_0002af48 + uVar14,&local_44,2);
              uVar14 = uVar14 + 2 & 0xffff;
              FUN_0003589a(DAT_0002af48 + uVar14,puVar8 + 1,10);
              uVar14 = uVar14 + 10 & 0xffff;
              FUN_0003589a(DAT_0002af48 + uVar14,puVar8 + 6,1);
              uVar14 = uVar14 + 1 & 0xffff;
              FUN_0003589a(DAT_0002af48 + uVar14,puVar8 + 8,1);
              uVar14 = uVar14 + 1 & 0xffff;
              if (*(char *)(puVar8 + 8) != '\0') {
                FUN_0003589a(DAT_0002af48 + uVar14,*(undefined4 *)(puVar8 + 10));
                uVar14 = *(byte *)(puVar8 + 8) + uVar14 & 0xffff;
              }
              FUN_0003589a(DAT_0002af48 + uVar14,puVar8 + 0xc,1);
              uVar14 = uVar14 + 1 & 0xffff;
              if (*(char *)(puVar8 + 0xc) != '\0') {
                FUN_0003589a(DAT_0002af48 + uVar14,*(undefined4 *)(puVar8 + 0xe));
                uVar14 = *(byte *)(puVar8 + 0xc) + uVar14 & 0xffff;
              }
              pbVar18 = (byte *)(puVar8 + 0x10);
              local_3c = pbVar18;
              FUN_0003589a(DAT_0002af48 + uVar14,pbVar18,1);
              uVar14 = uVar14 + 1 & 0xffff;
              if (*local_3c != 0) {
                FUN_0003589a(DAT_0002af48 + uVar14,*(undefined4 *)(puVar8 + 0x12));
                uVar14 = *pbVar18 + uVar14 & 0xffff;
              }
              uVar19 = uVar19 + 1 & 0xff;
            } while (uVar19 < uVar12);
          }
          FUN_00030ace(auStack_30);
          iVar7 = *local_48;
          FUN_00030b0c(auStack_30,DAT_0002af48,uVar14,0xd,*(undefined1 *)(iVar7 + 0x3b4),0,
                       (int)*(short *)(iVar7 + 0x3b6),*(undefined1 *)(iVar7 + 0x3b8),
                       *(undefined1 *)(iVar7 + 0x3e0));
          FUN_0002f5f0(local_48,local_34,local_40,uVar14);
          FUN_00033eb4(*(undefined2 *)(*local_48 + 2),auStack_30);
          uVar10 = _DAT_0002b350;
          iVar7 = FUN_00030b90(_DAT_0002b350);
          if (iVar7 != 0) {
            uVar10 = FUN_00029e6c(uVar10);
            pcVar15 = s__MM__FAULT_LOG_response_manageme_0002b353 + 1;
            goto LAB_0002a7d4;
          }
        }
        else {
          iVar9 = iVar7;
          uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x34));
          cVar20 = *(char *)(iVar7 + 0x2c);
          cVar24 = *(char *)(iVar7 + 0x2d);
          uVar5 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
          FUN_0002fef8(param_1,uVar5,iVar9 + 0x14,cVar20 - cVar24,DAT_0002aecc,uVar4,0);
          iVar7 = FUN_00030b90(piVar17);
          if (iVar7 != 0) {
            FUN_00029e6c(piVar17);
            FUN_00029eac(4,DAT_0002af44);
          }
        }
        goto LAB_0002a108;
      }
      if (iVar11 == 7) {
        iVar7 = FUN_00030b90(_DAT_0002b350);
        if (iVar7 != 0) {
          FUN_00029e6c(_DAT_0002b350);
          FUN_00029eac(6,s_MM__FAULT_LOG_RESET_management_m_0002b38c);
        }
        iVar7 = FUN_00030bb8();
        iVar9 = *(int *)(param_2 + 0xc);
        iVar11 = iVar9 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar9 + 0x2a),*(undefined1 *)(iVar9 + 0x2b));
        if ((uVar12 == *(ushort *)(*param_1 + 2)) || (uVar12 == DAT_0002b3c0)) {
          if ((*(byte *)(iVar9 + 0x2e) & 0xf) == 3) {
            if (iVar7 != 0) {
              FUN_00029a4c();
            }
            uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x34));
            uVar12 = (uint)*(byte *)(iVar11 + 0xc) - (uint)*(byte *)(iVar11 + 0xd) & 0xff;
            uVar5 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
            FUN_0002f78c(param_1,uVar5,iVar9 + 0x14,uVar12,uVar4);
            uVar10 = _DAT_0002b350;
            iVar7 = FUN_00030b90(_DAT_0002b350);
            if (iVar7 != 0) {
              uVar10 = FUN_00029e6c(uVar10);
              pcVar15 = s___MM__FAULT_LOG_RESET_acknowledg_0002b3ca + 2;
              goto LAB_0002a906;
            }
          }
          else {
            uVar12 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x34));
            uVar12 = uVar12 & 0xffff;
            cVar20 = *(char *)(iVar11 + 0xc);
            cVar24 = *(char *)(iVar11 + 0xd);
            uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
            FUN_0002fef8(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24,6,uVar12,0);
            iVar7 = FUN_00030b90(piVar17);
            if (iVar7 != 0) {
              FUN_00029e6c(piVar17);
              FUN_00029eac(4,_DAT_0002b3c8);
            }
          }
        }
        else {
          iVar7 = FUN_00030b90(piVar17);
          if (iVar7 != 0) {
            FUN_00029e6c(piVar17);
            FUN_00029eac(4,DAT_0002b3c4);
          }
        }
        goto LAB_0002a108;
      }
    }
    else {
      if (iVar9 == 1) {
        FUN_0002b2f4();
        iVar9 = extraout_r2_00;
      }
      if (iVar9 == 2) {
        FUN_0002b670();
        iVar9 = extraout_r2_01;
        goto LAB_0002a00a;
      }
    }
    goto switchD_00029fbc_default;
  }
  cVar24 = SBORROW4(iVar9,0xb);
  cVar20 = iVar9 + -0xb < 0;
  uVar21 = iVar9 == 0xb;
  if ((bool)uVar21) {
    FUN_0002e504();
    iVar9 = extraout_r1;
  }
  uVar10 = _DAT_0002e62c;
  if (!(bool)uVar21 && cVar20 == cVar24) {
    cVar24 = SBORROW4(iVar9,0x11);
    cVar20 = iVar9 + -0x11 < 0;
    uVar21 = iVar9 == 0x11;
    if ((bool)uVar21) {
      FUN_0002e9b4();
      iVar9 = extraout_r1_00;
    }
    uVar13 = DAT_0002ec3c;
    uVar10 = _DAT_0002e62c;
    if (!(bool)uVar21 && cVar20 == cVar24) {
      if (iVar9 == 0x12) {
        FUN_0002ea28();
        iVar9 = extraout_r1_01;
      }
      if (iVar9 == 0x13) {
        FUN_0002ea9c();
        iVar9 = extraout_r1_02;
      }
      if (iVar9 + DAT_0002a37c == 0) {
        FUN_0002eb10();
      }
      else if (iVar9 + DAT_0002a37c == 1) {
        FUN_0002ee6c();
      }
switchD_00029fbc_default:
      iVar9 = FUN_00030b90(piVar17);
      if (iVar9 != 0) {
        FUN_00029e6c(piVar17);
        uVar10 = FUN_000358f6(puVar8[2]);
        FUN_00029eac(4,_DAT_0002a380,uVar10);
      }
      uVar4 = FUN_000358f6(puVar8[2]);
      cVar20 = *(char *)(iVar7 + 0x2c);
      cVar24 = *(char *)(iVar7 + 0x2d);
      uVar5 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
      FUN_0002fef8(param_1,uVar5,iVar7 + 0x14,cVar20 - cVar24,6,uVar4,0);
      goto LAB_0002a108;
    }
    switch(iVar9) {
    case 0xc:
      iVar7 = FUN_00030b90(_DAT_0002e62c);
      if (iVar7 != 0) {
        FUN_00029e6c(uVar10);
        FUN_00029eac(6,s___MM__ACCEPTABLE_MASTER_TABLE_ma_0002e7d6 + 2);
      }
      iVar7 = *(int *)(param_2 + 0xc);
      uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x34));
      local_48 = (int *)((uint)*(byte *)(iVar7 + 0x2c) - (uint)*(byte *)(iVar7 + 0x2d) & 0xff);
      uVar5 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
      FUN_0002fef8(param_1,uVar5,iVar7 + 0x14,local_48,6,uVar4,0);
      iVar7 = FUN_00030b90(piVar17);
      bVar23 = true;
      if (iVar7 != 0) {
        uVar13 = FUN_00029e6c(piVar17);
        uVar10 = DAT_0002e814;
        goto LAB_0002c460;
      }
      goto LAB_0002e4f8;
    case 0xd:
      iVar7 = FUN_00030b90(_DAT_0002e62c);
      if (iVar7 != 0) {
        FUN_00029e6c(uVar10);
        FUN_00029eac(6,DAT_0002e818);
      }
      iVar7 = *(int *)(param_2 + 0xc);
      uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x34));
      uVar12 = (uint)*(byte *)(iVar7 + 0x2c) - (uint)*(byte *)(iVar7 + 0x2d) & 0xff;
      uVar5 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
      FUN_0002fef8(param_1,uVar5,iVar7 + 0x14,uVar12,6,uVar4,0);
      iVar7 = FUN_00030b90(piVar17);
      if (iVar7 != 0) {
        uVar13 = FUN_00029e6c(piVar17);
        uVar10 = DAT_0002ec38;
        goto LAB_0002c460;
      }
      goto LAB_0002a108;
    case 0xe:
      iVar7 = FUN_00030b90(DAT_0002ec3c);
      if (iVar7 != 0) {
        FUN_00029e6c(uVar13);
        FUN_00029eac(6,DAT_0002ec40);
      }
      iVar7 = *(int *)(param_2 + 0xc);
      uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x34));
      local_48 = (int *)((uint)*(byte *)(iVar7 + 0x2c) - (uint)*(byte *)(iVar7 + 0x2d) & 0xff);
      uVar5 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
      FUN_0002fef8(param_1,uVar5,iVar7 + 0x14,local_48,6,uVar4,0);
      iVar7 = FUN_00030b90(piVar17);
      bVar23 = iVar7 == 0;
      break;
    case 0xf:
      iVar7 = FUN_00030b90(DAT_0002ec3c);
      if (iVar7 != 0) {
        FUN_00029e6c(uVar13);
        FUN_00029eac(6,s___MM__ALTERNATE_MASTER_managemen_0002ec46 + 2);
      }
      iVar7 = *(int *)(param_2 + 0xc);
      uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x34));
      cVar20 = *(char *)(iVar7 + 0x2c);
      cVar24 = *(char *)(iVar7 + 0x2d);
      uVar5 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
      FUN_0002fef8(param_1,uVar5,iVar7 + 0x14,cVar20 - cVar24,6,uVar4,0);
      iVar7 = FUN_00030b90(piVar17);
      if (iVar7 != 0) {
        uVar13 = FUN_00029e6c(piVar17);
        uVar10 = _DAT_0002ec7c;
        goto LAB_0002c460;
      }
      goto LAB_0002a108;
    case 0x10:
      iVar7 = FUN_00030b90(DAT_0002ec3c);
      if (iVar7 != 0) {
        FUN_00029e6c(uVar13);
        FUN_00029eac(6,s___MM__ALTERNATE_TIME_OFFSET_ENAB_0002ec7e + 2);
      }
      iVar7 = *(int *)(param_2 + 0xc);
      uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x34));
      cVar20 = *(char *)(iVar7 + 0x2c);
      cVar24 = *(char *)(iVar7 + 0x2d);
      uVar5 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
      FUN_0002fef8(param_1,uVar5,iVar7 + 0x14,cVar20 - cVar24,6,uVar4,0);
      iVar7 = FUN_00030b90(piVar17);
      bVar23 = true;
      if (iVar7 != 0) {
        uVar13 = FUN_00029e6c(piVar17);
        uVar10 = _DAT_0002ecc0;
        goto LAB_0002c460;
      }
      break;
    default:
      goto switchD_00029fbc_default;
    }
    if (!bVar23) {
      uVar13 = FUN_00029e6c(piVar17);
      uVar10 = _DAT_0002ec44;
      goto LAB_0002c460;
    }
    goto LAB_0002a108;
  }
  switch(iVar9) {
  default:
    goto switchD_00029fbc_default;
  case 1:
    iVar7 = FUN_00030b90(_DAT_0002d498);
    if (iVar7 != 0) {
      FUN_00029e6c(_DAT_0002d498);
      FUN_00029eac(6,s_MM__TIME_management_message_rece_0002d638);
    }
    piVar16 = _DAT_0002da8c;
    iVar7 = *(int *)(param_2 + 0xc);
    iVar9 = iVar7 + 0x20;
    uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar7 + 0x2a),*(undefined1 *)(iVar7 + 0x2b));
    if ((uVar12 != *(ushort *)(*param_1 + 2)) && (uVar12 != DAT_0002d578)) {
      iVar7 = FUN_00030b90(piVar17);
      if (iVar7 != 0) {
        uVar13 = FUN_00029e6c(piVar17);
        uVar10 = DAT_0002d660;
        goto LAB_0002c602;
      }
      bVar23 = true;
LAB_0002d2f8:
      bVar22 = true;
      if (!bVar23) {
        uVar10 = FUN_00029e6c(param_1);
        pcVar15 = s___MM__ENABLE_PORT_acknowledge_ma_0002d582 + 2;
        goto LAB_0002a6a4;
      }
      goto LAB_0002d23a;
    }
    if ((*(byte *)(iVar7 + 0x2e) & 0xf) == 0) {
      iVar11 = FUN_00030b90(_DAT_0002da8c);
      if (iVar11 != 0) {
        FUN_00029e6c(piVar16);
        FUN_00029eac(6,s__MM__TIME_management_message_act_0002da8f + 1);
      }
      uVar12 = (uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff;
      uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
      FUN_000303b4(param_1,uVar4,iVar7 + 0x14,uVar12);
      iVar7 = FUN_00030b90(piVar16);
      bVar23 = iVar7 == 0;
LAB_0002d71c:
      if (bVar23) goto LAB_0002a108;
      uVar10 = FUN_00029e6c(piVar16);
      pcVar15 = s_MM__TIME_response_management_mes_0002dabc;
      goto LAB_0002a6a4;
    }
    if ((*(byte *)(iVar7 + 0x2e) & 0xf) != 1) {
      uVar12 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x34));
      uVar12 = uVar12 & 0xffff;
      local_48 = (int *)((uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff);
      uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
      FUN_0002fef8(param_1,uVar4,iVar7 + 0x14,local_48,DAT_0002da84,uVar12,0);
      iVar7 = FUN_00030b90(piVar17);
      if (iVar7 == 0) goto LAB_0002a108;
      uVar13 = FUN_00029e6c(piVar17);
      uVar10 = DAT_0002da88;
      goto LAB_0002c460;
    }
    iVar11 = FUN_00030b90(_DAT_0002da8c);
    if (iVar11 != 0) {
      FUN_00029e6c(_DAT_0002da8c);
      FUN_00029eac(6,s_MM__TIME_management_message_acti_0002daf0);
    }
    iVar11 = FUN_0018205c(*(int *)(*param_1 + 0x27c) + 0x1c,*(int *)(*param_1 + 0x274) + 0xb);
    if (iVar11 == 0) {
      uVar12 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x34));
      uVar12 = uVar12 & 0xffff;
      cVar20 = *(char *)(iVar9 + 0xc);
      cVar24 = *(char *)(iVar9 + 0xd);
      uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
      FUN_0002fef8(param_1,uVar4,iVar7 + 0x14,cVar20 - cVar24,5,uVar12,0);
      iVar7 = FUN_00030b90(piVar17);
      bVar23 = iVar7 == 0;
      goto LAB_0002d80a;
    }
    FUN_000365d8(&local_48,*(int *)(param_2 + 0xc) + 0x36);
    FUN_0002615c(&local_48);
    cVar20 = *(char *)(iVar9 + 0xc);
    cVar24 = *(char *)(iVar9 + 0xd);
    uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
    FUN_000303b4(param_1,uVar4,iVar7 + 0x14,cVar20 - cVar24);
    param_1 = _DAT_0002da8c;
    iVar7 = FUN_00030b90(_DAT_0002da8c);
    bVar23 = iVar7 == 0;
    break;
  case 2:
    iVar7 = FUN_00030b90(_DAT_0002da8c);
    if (iVar7 != 0) {
      FUN_00029e6c(_DAT_0002da8c);
      FUN_00029eac(6,s___MM__CLOCK_ACCURACY_management_m_0002db1e + 2);
    }
    piVar16 = _DAT_0002da8c;
    iVar7 = *(int *)(param_2 + 0xc);
    iVar9 = iVar7 + 0x20;
    uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar7 + 0x2a),*(undefined1 *)(iVar7 + 0x2b));
    if ((uVar12 == *(ushort *)(*param_1 + 2)) || (uVar12 == DAT_0002db50)) {
      if ((*(byte *)(iVar7 + 0x2e) & 0xf) == 0) {
        iVar11 = FUN_00030b90(_DAT_0002da8c);
        if (iVar11 != 0) {
          FUN_00029e6c(piVar16);
          FUN_00029eac(6,s___MM__CLOCK_ACCURACY_management_m_0002db5a + 2);
        }
        uVar12 = (uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff;
        uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
        FUN_0002f944(param_1,uVar4,iVar7 + 0x14,uVar12);
        iVar7 = FUN_00030b90(piVar16);
        if (iVar7 == 0) goto LAB_0002a108;
      }
      else {
        if ((*(byte *)(iVar7 + 0x2e) & 0xf) != 1) {
          uVar12 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x34));
          uVar12 = uVar12 & 0xffff;
          cVar20 = *(char *)(iVar9 + 0xc);
          cVar24 = *(char *)(iVar9 + 0xd);
          uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
          FUN_0002fef8(param_1,uVar4,iVar7 + 0x14,cVar20 - cVar24,DAT_0002da84,uVar12,0);
          iVar7 = FUN_00030b90(piVar17);
          bVar23 = true;
          if (iVar7 != 0) {
            uVar13 = FUN_00029e6c(piVar17);
            uVar10 = _DAT_0002db58;
            goto LAB_0002c460;
          }
LAB_0002d80a:
          piVar16 = piVar17;
          if (!bVar23) {
            uVar13 = FUN_00029e6c(piVar17);
            uVar10 = _DAT_0002db1c;
            goto LAB_0002c460;
          }
          goto LAB_0002d71c;
        }
        iVar11 = FUN_00030b90(_DAT_0002da8c);
        if (iVar11 != 0) {
          FUN_00029e6c(piVar16);
          FUN_00029eac(6,s_MM__CLOCK_ACCURACY_management_me_0002db94);
        }
        *(undefined1 *)(*(int *)(*param_1 + 0x274) + 7) =
             *(undefined1 *)(*(int *)(param_2 + 0xc) + 0x36);
        uVar12 = (uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff;
        uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
        FUN_0002f944(param_1,uVar4,iVar7 + 0x14,uVar12);
        iVar7 = FUN_00030b90(piVar16);
        bVar23 = iVar7 == 0;
LAB_0002d9aa:
        if (bVar23) goto LAB_0002a108;
      }
      uVar10 = FUN_00029e6c(piVar16);
      pcVar15 = s_MM__CLOCK_ACCURACY_response_mana_0002dbcc;
      goto LAB_0002a6a4;
    }
    iVar7 = FUN_00030b90(piVar17);
    bVar23 = true;
    if (iVar7 != 0) {
      uVar13 = FUN_00029e6c(piVar17);
      uVar10 = DAT_0002db54;
      goto LAB_0002c460;
    }
    break;
  case 3:
    iVar7 = FUN_00030b90(_DAT_0002da8c);
    if (iVar7 != 0) {
      FUN_00029e6c(_DAT_0002da8c);
      FUN_00029eac(6,s_MM__UTC_PROPERTIES_management_me_0002dc08);
    }
    piVar16 = _DAT_0002e02c;
    iVar9 = *(int *)(param_2 + 0xc);
    iVar7 = iVar9 + 0x20;
    uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar9 + 0x2a),*(undefined1 *)(iVar9 + 0x2b));
    if ((uVar12 != *(ushort *)(*param_1 + 2)) && (uVar12 != DAT_0002db50)) {
      iVar7 = FUN_00030b90(piVar17);
      if (iVar7 == 0) goto LAB_0002a108;
      uVar13 = FUN_00029e6c(piVar17);
      uVar10 = DAT_0002dc38;
      goto LAB_0002c460;
    }
    if ((*(byte *)(iVar9 + 0x2e) & 0xf) == 0) {
      iVar11 = FUN_00030b90(_DAT_0002e02c);
      if (iVar11 != 0) {
        FUN_00029e6c(piVar16);
        FUN_00029eac(6,s__MM__UTC_PROPERTIES_management_m_0002e02f + 1);
      }
      cVar20 = *(char *)(iVar7 + 0xc);
      cVar24 = *(char *)(iVar7 + 0xd);
      uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
      FUN_0003081c(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24);
      iVar7 = FUN_00030b90(piVar16);
    }
    else {
      if ((*(byte *)(iVar9 + 0x2e) & 0xf) != 1) {
        uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x34));
        cVar20 = *(char *)(iVar7 + 0xc);
        cVar24 = *(char *)(iVar7 + 0xd);
        uVar5 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
        FUN_0002fef8(param_1,uVar5,iVar9 + 0x14,cVar20 - cVar24,DAT_0002da84,uVar4,0);
        iVar7 = FUN_00030b90(piVar17);
        bVar23 = true;
        piVar16 = piVar17;
        if (iVar7 != 0) {
          uVar13 = FUN_00029e6c(piVar17);
          uVar10 = DAT_0002dc3c;
          goto LAB_0002c460;
        }
        goto LAB_0002d9aa;
      }
      iVar11 = FUN_00030b90(_DAT_0002e02c);
      if (iVar11 != 0) {
        FUN_00029e6c(piVar16);
        FUN_00029eac(6,s_MM__UTC_PROPERTIES_management_me_0002e0a4);
      }
      iVar11 = *(int *)(param_2 + 0xc);
      sVar6 = FUN_000358f6((int)*(short *)(iVar11 + 0x36));
      FUN_00026074((int)sVar6);
      FUN_000260d0((*(byte *)(iVar11 + 0x38) & 1) != 0);
      FUN_000260c4((int)((uint)*(byte *)(iVar11 + 0x38) << 0x1e) < 0);
      FUN_00026268((int)((uint)*(byte *)(iVar11 + 0x38) << 0x1d) < 0);
      FUN_001aa4dc(*(undefined4 *)(*param_1 + 4));
      cVar20 = *(char *)(iVar7 + 0xc);
      cVar24 = *(char *)(iVar7 + 0xd);
      uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
      FUN_0003081c(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24);
      iVar7 = FUN_00030b90(piVar16);
    }
    if (iVar7 == 0) goto LAB_0002a108;
    uVar10 = FUN_00029e6c(piVar16);
    pcVar15 = s_MM__UTC_PROPERTIES_response_mana_0002e068;
    goto LAB_0002a6a4;
  case 4:
    iVar7 = FUN_00030b90(_DAT_0002e02c);
    if (iVar7 != 0) {
      FUN_00029e6c(_DAT_0002e02c);
      FUN_00029eac(6,s_MM__TRACEABILITY_PROPERTIES_mana_0002e0dc);
    }
    piVar16 = _DAT_0002e02c;
    iVar9 = *(int *)(param_2 + 0xc);
    iVar7 = iVar9 + 0x20;
    uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar9 + 0x2a),*(undefined1 *)(iVar9 + 0x2b));
    if ((uVar12 == *(ushort *)(*param_1 + 2)) || (uVar12 == DAT_0002e118)) {
      if ((*(byte *)(iVar9 + 0x2e) & 0xf) != 0) {
        if ((*(byte *)(iVar9 + 0x2e) & 0xf) == 1) {
          iVar11 = FUN_00030b90(_DAT_0002e02c);
          if (iVar11 != 0) {
            FUN_00029e6c(_DAT_0002e02c);
            FUN_00029eac(6,s___MM__TRACEABILITY_PROPERTIES_ma_0002e16a + 2);
          }
          pbVar18 = (byte *)(*(int *)(param_2 + 0xc) + 0x36);
          FUN_000260b8((int)((uint)*pbVar18 << 0x1a) < 0);
          FUN_000261f8((int)((uint)*pbVar18 << 0x1b) < 0);
          FUN_001aa4dc(*(undefined4 *)(*param_1 + 4));
          piVar17 = (int *)((uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff);
          uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
          FUN_000305b0(param_1,uVar4,iVar9 + 0x14,piVar17);
          param_1 = _DAT_0002e02c;
          iVar7 = FUN_00030b90(_DAT_0002e02c);
          bVar22 = iVar7 == 0;
          goto LAB_0002defe;
        }
        local_44 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x34));
        local_44 = local_44 & 0xffff;
        cVar20 = *(char *)(iVar7 + 0xc);
        cVar24 = *(char *)(iVar7 + 0xd);
        uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
        FUN_0002fef8(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24,DAT_0002e120,local_44,0);
        iVar7 = FUN_00030b90(piVar17);
        bVar23 = iVar7 == 0;
        goto LAB_0002de0c;
      }
      iVar11 = FUN_00030b90(_DAT_0002e02c);
      if (iVar11 != 0) {
        FUN_00029e6c(piVar16);
        FUN_00029eac(6,s___MM__TRACEABILITY_PROPERTIES_ma_0002e126 + 2);
      }
      uVar12 = (uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff;
      uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
      FUN_000305b0(param_1,uVar4,iVar9 + 0x14,uVar12);
      iVar7 = FUN_00030b90(piVar16);
      bVar23 = true;
      if (iVar7 != 0) {
        uVar10 = FUN_00029e6c(piVar16);
        pcVar15 = _DAT_0002e168;
        goto LAB_0002a6a4;
      }
    }
    else {
      iVar7 = FUN_00030b90(piVar17);
      bVar23 = iVar7 == 0;
      piVar16 = piVar17;
    }
    if (bVar23) goto LAB_0002a108;
    uVar13 = FUN_00029e6c(piVar16);
    uVar10 = DAT_0002e11c;
    goto LAB_0002c460;
  case 5:
    iVar7 = FUN_00030b90(_DAT_0002e02c);
    if (iVar7 != 0) {
      FUN_00029e6c(_DAT_0002e02c);
      FUN_00029eac(6,s_MM__TIMESCALE_PROPERTIES_managem_0002e1ac);
    }
    piVar16 = _DAT_0002e02c;
    iVar9 = *(int *)(param_2 + 0xc);
    iVar7 = iVar9 + 0x20;
    uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar9 + 0x2a),*(undefined1 *)(iVar9 + 0x2b));
    if ((uVar12 == *(ushort *)(*param_1 + 2)) || (uVar12 == DAT_0002e118)) {
      if ((*(byte *)(iVar9 + 0x2e) & 0xf) == 0) {
        iVar11 = FUN_00030b90(_DAT_0002e02c);
        if (iVar11 != 0) {
          FUN_00029e6c(piVar16);
          FUN_00029eac(6,s___MM__TIMESCALE_PROPERTIES_manag_0002e1ea + 2);
        }
        uVar12 = (uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff;
        uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
        FUN_00030494(param_1,uVar4,iVar9 + 0x14,uVar12);
        iVar7 = FUN_00030b90(piVar16);
        bVar23 = iVar7 == 0;
        piVar17 = piVar16;
        if (!bVar23) {
          uVar10 = FUN_00029e6c(piVar16);
          pcVar15 = DAT_0002e628;
          goto LAB_0002a6a4;
        }
        goto LAB_0002df62;
      }
      if ((*(byte *)(iVar9 + 0x2e) & 0xf) == 1) {
        iVar11 = FUN_00030b90(_DAT_0002e62c);
        if (iVar11 != 0) {
          FUN_00029e6c(_DAT_0002e62c);
          FUN_00029eac(6,s__MM__TIMESCALE_PROPERTIES_manage_0002e62f + 1);
        }
        iVar11 = *(int *)(param_2 + 0xc);
        FUN_00026150((int)((uint)*(byte *)(iVar11 + 0x36) << 0x1c) < 0);
        FUN_000261ec(*(undefined1 *)(iVar11 + 0x37));
        FUN_001aa4dc(*(undefined4 *)(*param_1 + 4));
        cVar20 = *(char *)(iVar7 + 0xc);
        cVar24 = *(char *)(iVar7 + 0xd);
        uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
        FUN_00030494(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24);
        uVar10 = _DAT_0002e62c;
        iVar7 = FUN_00030b90(_DAT_0002e62c);
        if (iVar7 == 0) goto LAB_0002a108;
        uVar10 = FUN_00029e6c(uVar10);
        pcVar15 = DAT_0002e628;
        goto LAB_0002a6a4;
      }
      local_44 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x34));
      local_44 = local_44 & 0xffff;
      cVar20 = *(char *)(iVar7 + 0xc);
      cVar24 = *(char *)(iVar7 + 0xd);
      uVar4 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
      FUN_0002fef8(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24,DAT_0002e120,local_44,0);
      iVar7 = FUN_00030b90(piVar17);
      bVar22 = true;
      if (iVar7 != 0) {
        uVar13 = FUN_00029e6c(piVar17);
        uVar10 = _DAT_0002e1e8;
        goto LAB_0002c460;
      }
    }
    else {
      iVar7 = FUN_00030b90(piVar17);
      bVar23 = iVar7 == 0;
LAB_0002df62:
      bVar22 = true;
      if (!bVar23) {
        uVar13 = FUN_00029e6c(piVar17);
        uVar10 = DAT_0002e1e4;
        goto LAB_0002c460;
      }
    }
LAB_0002defe:
    bVar23 = true;
    if (!bVar22) {
      uVar10 = FUN_00029e6c(param_1);
      pcVar15 = _DAT_0002e168;
      goto LAB_0002a6a4;
    }
LAB_0002de0c:
    if (!bVar23) {
      uVar13 = FUN_00029e6c(piVar17);
      uVar10 = _DAT_0002e124;
      goto LAB_0002c460;
    }
    goto LAB_0002a108;
  case 6:
    iVar7 = FUN_00030b90(_DAT_0002e62c);
    if (iVar7 != 0) {
      FUN_00029e6c(uVar10);
      FUN_00029eac(6,s_MM__UNICAST_NEGOTIATION_ENABLE_m_0002e66c);
    }
    iVar7 = *(int *)(param_2 + 0xc);
    uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x34));
    cVar20 = *(char *)(iVar7 + 0x2c);
    cVar24 = *(char *)(iVar7 + 0x2d);
    uVar5 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
    FUN_0002fef8(param_1,uVar5,iVar7 + 0x14,cVar20 - cVar24,6,uVar4,0);
    iVar7 = FUN_00030b90(piVar17);
    bVar22 = iVar7 == 0;
    goto LAB_0002e328;
  case 7:
    iVar7 = FUN_00030b90(_DAT_0002e62c);
    if (iVar7 != 0) {
      FUN_00029e6c(uVar10);
      FUN_00029eac(6,s___MM__PATH_TRACE_LIST_management_0002e6aa + 2);
    }
    iVar7 = *(int *)(param_2 + 0xc);
    uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x34));
    cVar20 = *(char *)(iVar7 + 0x2c);
    cVar24 = *(char *)(iVar7 + 0x2d);
    uVar5 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
    FUN_0002fef8(param_1,uVar5,iVar7 + 0x14,cVar20 - cVar24,6,uVar4,0);
    iVar7 = FUN_00030b90(piVar17);
    bVar23 = iVar7 == 0;
    goto LAB_0002e39c;
  case 8:
    iVar7 = FUN_00030b90(_DAT_0002e62c);
    if (iVar7 != 0) {
      FUN_00029e6c(uVar10);
      FUN_00029eac(6,s___MM__PATH_TRACE_ENABLE_manageme_0002e6e2 + 2);
    }
    iVar7 = *(int *)(param_2 + 0xc);
    uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x34));
    cVar20 = *(char *)(iVar7 + 0x2c);
    cVar24 = *(char *)(iVar7 + 0x2d);
    uVar5 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
    FUN_0002fef8(param_1,uVar5,iVar7 + 0x14,cVar20 - cVar24,6,uVar4,0);
    iVar7 = FUN_00030b90(piVar17);
    bVar23 = iVar7 == 0;
    goto LAB_0002e410;
  case 9:
    iVar7 = FUN_00030b90(_DAT_0002e62c);
    if (iVar7 != 0) {
      FUN_00029e6c(uVar10);
      FUN_00029eac(6,s___MM__MASTER_CLUSTER_TABLE_manag_0002e71a + 2);
    }
    iVar7 = *(int *)(param_2 + 0xc);
    uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x34));
    cVar20 = *(char *)(iVar7 + 0x2c);
    cVar24 = *(char *)(iVar7 + 0x2d);
    uVar5 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
    FUN_0002fef8(param_1,uVar5,iVar7 + 0x14,cVar20 - cVar24,6,uVar4,0);
    iVar7 = FUN_00030b90(piVar17);
    bVar23 = iVar7 == 0;
    if (!bVar23) {
      uVar13 = FUN_00029e6c(piVar17);
      uVar10 = _DAT_0002e754;
      goto LAB_0002c460;
    }
LAB_0002e39c:
    if (!bVar23) {
      uVar13 = FUN_00029e6c(piVar17);
      uVar10 = _DAT_0002e6e0;
LAB_0002c460:
      FUN_0002c114(uVar13,uVar10);
      return;
    }
    goto LAB_0002a108;
  case 10:
    iVar7 = FUN_00030b90(_DAT_0002e62c);
    if (iVar7 != 0) {
      FUN_00029e6c(uVar10);
      FUN_00029eac(6,s___MM__UNICAST_MASTER_TABLE_manag_0002e756 + 2);
    }
    iVar7 = *(int *)(param_2 + 0xc);
    uVar4 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x34));
    cVar20 = *(char *)(iVar7 + 0x2c);
    cVar24 = *(char *)(iVar7 + 0x2d);
    uVar5 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
    FUN_0002fef8(param_1,uVar5,iVar7 + 0x14,cVar20 - cVar24,6,uVar4,0);
    iVar7 = FUN_00030b90(piVar17);
    bVar23 = iVar7 == 0;
LAB_0002e4f8:
    if (!bVar23) {
      uVar13 = FUN_00029e6c(piVar17);
      uVar10 = _DAT_0002e790;
      goto LAB_0002c460;
    }
LAB_0002e410:
    bVar22 = true;
    if (!bVar23) {
      uVar13 = FUN_00029e6c(piVar17);
      uVar10 = _DAT_0002e718;
      goto LAB_0002c460;
    }
LAB_0002e328:
    if (!bVar22) {
      uVar13 = FUN_00029e6c(piVar17);
      uVar10 = _DAT_0002e6a8;
      goto LAB_0002c460;
    }
    goto LAB_0002a108;
  }
  if (!bVar23) {
    uVar10 = FUN_00029e6c(param_1);
    pcVar15 = s_MM__TIME_response_management_mes_0002dabc;
LAB_0002a6a4:
    FUN_0002a2ae(uVar10,pcVar15);
    return;
  }
LAB_0002a108:
  FUN_00030aa4(param_2);
  return;
}

