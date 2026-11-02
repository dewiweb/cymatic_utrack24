// rea decompile_all
// name: FUN_0002fa38
// address: 0x2fa38
// body: available
// range: 0x2fa38-0x2fb0d inclusive
// range: 0x2fb14-0x2fb29 inclusive
// range: 0x2fb30-0x2fb67 inclusive
// range: 0x2fb7e-0x2fb95 inclusive
// range: 0x2fbac-0x2fbc5 inclusive
// range: 0x2fbd0-0x2fc57 inclusive
// range: 0x2fc62-0x2fdfd inclusive
// range: 0x2fe02-0x2fe25 inclusive
// range: 0x30070-0x30457 inclusive
// range: 0x305e4-0x309df inclusive
// range: 0x30a9c-0x30e43 inclusive
// range: 0x316f2-0x3185b inclusive
// range: 0x31930-0x31c63 inclusive
// range: 0x31cbc-0x31d31 inclusive
// range: 0x31d3c-0x31d99 inclusive
// range: 0x31fa8-0x323a5 inclusive
// range: 0x325a0-0x329a9 inclusive
// range: 0x32bdc-0x32e53 inclusive
// range: 0x32f76-0x32fdb inclusive
// range: 0x331b4-0x335d3 inclusive
// range: 0x33790-0x33b7b inclusive
// range: 0x33d78-0x34053 inclusive
// range: 0x340c8-0x34177 inclusive
// range: 0x3436c-0x34503 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2fb28 to 0x2fdfe FUN_0002fdfe (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2fd4c to 0x2fdfe FUN_0002fdfe (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x301f4 to 0x2fdfe FUN_0002fdfe (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x30324 to 0x2fdfe FUN_0002fdfe (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x30456 to 0x2fdfe FUN_0002fdfe (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x31bfc to 0x31c64 FUN_00031c64 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x31fb0 to 0x31c64 FUN_00031c64 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3201a to 0x31c64 FUN_00031c64 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x32152 to 0x31c64 FUN_00031c64 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x321ba to 0x31c64 FUN_00031c64 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x322f0 to 0x31c64 FUN_00031c64 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x32358 to 0x31c64 FUN_00031c64 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, sepa
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00032f14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002fa38(int *param_1,int param_2)

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
  
  piVar17 = DAT_0002fe28;
  iVar7 = *(int *)(param_2 + 0xc);
  puVar8 = (undefined2 *)(iVar7 + 0x30);
  if (*(uint *)(param_2 + 8) < 0x36) {
    iVar9 = FUN_000366e0(DAT_0002fe28);
    if (iVar9 == 0) goto LAB_0002fc58;
    uVar10 = FUN_0002f9bc(piVar17);
    FUN_00031c64(uVar10,_DAT_0002fe2c);
  }
  iVar9 = FUN_0003b6a2(*puVar8);
  if (iVar9 != 1) {
    iVar7 = FUN_000366e0(piVar17);
    if (iVar7 != 0) {
      FUN_0002f9bc(piVar17);
      FUN_0002f9fc(4,s___MM__Received_management_messag_0002fe2e + 2);
    }
    goto LAB_0002fc58;
  }
  iVar9 = iVar7 + 0x22;
  iVar11 = FUN_001d3498(iVar9,*(int *)(*param_1 + 0x274) + 0xb);
  if ((iVar11 == 0) &&
     (iVar9 = FUN_001d3498(iVar9,DAT_0002fe6c), uVar10 = _DAT_0002fe88, iVar9 == 0)) {
    iVar7 = FUN_000366e0(_DAT_0002fe88);
    if (iVar7 != 0) {
      uVar10 = FUN_0002f9bc(uVar10);
      FUN_0002fdfe(uVar10,s__MM__Received_management_message_0002fe8b + 1);
      return;
    }
    goto LAB_0002fc58;
  }
  iVar9 = FUN_0003b6a2(puVar8[2]);
  uVar25 = CONCAT44(iVar9 - DAT_0002fe70,iVar9);
  cVar24 = SBORROW4(iVar9,DAT_0002fe70);
  cVar20 = iVar9 - DAT_0002fe70 < 0;
  uVar21 = iVar9 == DAT_0002fe70;
  if ((bool)uVar21) {
    uVar25 = FUN_00032e54();
  }
  iVar9 = (int)((ulonglong)uVar25 >> 0x20);
  iVar11 = (int)uVar25;
  if ((bool)uVar21 || cVar20 != cVar24) {
    local_3c = DAT_0002fe78;
    iVar9 = iVar11 - DAT_0002fe74;
    local_38 = DAT_0002fe7c;
    cVar24 = SBORROW4(iVar11,DAT_0002fe74);
    cVar20 = iVar11 - DAT_0002fe74 < 0;
    uVar21 = iVar11 == DAT_0002fe74;
    iVar26 = DAT_0002fe84;
    uVar10 = DAT_0002fe80;
    if ((bool)uVar21) {
      iVar11 = FUN_0003149c();
      iVar9 = extraout_r2;
    }
    uVar13 = _DAT_0002fe88;
    if (!(bool)uVar21 && cVar20 == cVar24) {
LAB_0002fb5a:
      switch(iVar9) {
      default:
        goto switchD_0002fb0c_default;
      case 1:
        iVar7 = FUN_000366e0(_DAT_00031898);
        if (iVar7 != 0) {
          FUN_0002f9bc(_DAT_00031898);
          FUN_0002f9fc(6,s___MM__PORT_DATA_SET_management_m_000318f2 + 2);
        }
        iVar7 = *(int *)(param_2 + 0xc);
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar7 + 0x2a),*(undefined1 *)(iVar7 + 0x2b));
        if ((uVar12 == *(ushort *)(*param_1 + 2)) || (uVar12 == DAT_000318d8)) {
          if ((*(byte *)(iVar7 + 0x2e) & 0xf) == 0) {
            iVar9 = iVar7;
            uVar12 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
            local_48 = (int *)(uVar12 & 0xffff);
            local_40 = iVar9 + 0x14;
            cVar20 = *(char *)(iVar7 + 0x2c) - *(char *)(iVar7 + 0x2d);
            iVar7 = *param_1;
            FUN_0003b64e(DAT_000318e8,0,1000);
            pbVar2 = local_38;
            pbVar18 = local_3c;
            local_44 = DAT_000318e8;
            FUN_0003b646(uVar10,local_40,10);
            *(char *)(iVar26 + 0xc) = cVar20;
            *(char *)(iVar26 + 0xd) = cVar20;
            *(undefined1 *)(iVar26 + 0xe) = 2;
            uVar4 = FUN_0003b618(1);
            *(undefined2 *)pbVar18 = uVar4;
            uVar4 = FUN_0003b618(0x22);
            *(undefined2 *)(pbVar18 + 2) = uVar4;
            uVar4 = FUN_0003b618(DAT_0003192c);
            *(undefined2 *)(pbVar18 + 4) = uVar4;
            FUN_0003b646(pbVar2,iVar7 + 0x250,8);
            pbVar2[8] = *(byte *)(iVar7 + 600);
            pbVar2[9] = *(byte *)(iVar7 + 0x259);
            pbVar2[10] = *(byte *)(iVar7 + 0x25a);
            pbVar2[0xb] = *(byte *)(iVar7 + 0x25b);
            uVar25 = FUN_0003b5e8(*(undefined4 *)(iVar7 + 0x260),*(undefined4 *)(iVar7 + 0x264));
            *(undefined8 *)(pbVar2 + 0x10) = uVar25;
            pbVar2[0x18] = *(byte *)(iVar7 + 0x268);
            pbVar2[0x19] = *(byte *)(iVar7 + 0x26b);
            pbVar2[0x1a] = *(byte *)(iVar7 + 0x26c);
            pbVar2[0x1b] = *(byte *)(iVar7 + 0x26d);
            pbVar2[0x1c] = *(byte *)(iVar7 + 0x26e);
            pbVar2[0x1d] = *(byte *)(iVar7 + 0x26f) & 0xf;
            FUN_0003661e(&local_34);
            iVar7 = *param_1;
            FUN_0003665c(&local_34,DAT_00031d9c,0x56,0xd,*(undefined1 *)(iVar7 + 0x3b4),0,
                         (int)*(short *)(iVar7 + 0x3b6),*(undefined1 *)(iVar7 + 0x3b8),
                         *(undefined1 *)(iVar7 + 0x3e0));
            FUN_00035140(param_1,local_44,local_48,0x56);
            FUN_00039a50(*(undefined2 *)(*param_1 + 2),&local_34);
            uVar10 = _DAT_00031da0;
            iVar7 = FUN_000366e0(_DAT_00031da0);
            if (iVar7 != 0) {
              uVar10 = FUN_0002f9bc(uVar10);
              pcVar15 = s__MM__PORT_DATASET_response_manag_00031da3 + 1;
              goto LAB_000301f4;
            }
          }
          else {
            iVar9 = iVar7;
            uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x34));
            cVar20 = *(char *)(iVar7 + 0x2c);
            cVar24 = *(char *)(iVar7 + 0x2d);
            uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
            FUN_00035a48(param_1,uVar5,iVar9 + 0x14,cVar20 - cVar24,DAT_000318e0,uVar4,0);
            iVar7 = FUN_000366e0(piVar17);
            if (iVar7 != 0) {
              FUN_0002f9bc(piVar17);
              FUN_0002f9fc(4,DAT_00031928);
            }
          }
        }
        else {
          iVar7 = FUN_000366e0(piVar17);
          if (iVar7 != 0) {
            FUN_0002f9bc(piVar17);
            FUN_0002f9fc(4,DAT_00031924);
          }
        }
        break;
      case 2:
        iVar7 = FUN_000366e0(_DAT_00031da0);
        if (iVar7 != 0) {
          FUN_0002f9bc(_DAT_00031da0);
          FUN_0002f9fc(6,s_MM__PRIORITY1_management_message_00031de0);
        }
        uVar10 = _DAT_00031da0;
        iVar7 = *(int *)(param_2 + 0xc);
        iVar9 = iVar7 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar7 + 0x2a),*(undefined1 *)(iVar7 + 0x2b));
        if ((uVar12 != *(ushort *)(*param_1 + 2)) && (uVar12 != DAT_00031e0c)) {
          iVar7 = FUN_000366e0(piVar17);
          if (iVar7 != 0) {
            FUN_0002f9bc(piVar17);
            FUN_0002f9fc(4,DAT_00031e10);
          }
          break;
        }
        if ((*(byte *)(iVar7 + 0x2e) & 0xf) == 0) {
          iVar11 = FUN_000366e0(_DAT_00031da0);
          if (iVar11 != 0) {
            FUN_0002f9bc(uVar10);
            FUN_0002f9fc(6,s___MM__PRIORITY1_management_messa_00031e1a + 2);
          }
          uVar12 = (uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff;
          uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
          FUN_00035c1c(param_1,uVar4,iVar7 + 0x14,uVar12);
          iVar7 = FUN_000366e0(uVar10);
        }
        else {
          if ((*(byte *)(iVar7 + 0x2e) & 0xf) != 1) {
            uVar12 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x34));
            uVar12 = uVar12 & 0xffff;
            cVar20 = *(char *)(iVar9 + 0xc);
            cVar24 = *(char *)(iVar9 + 0xd);
            uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
            FUN_00035a48(param_1,uVar4,iVar7 + 0x14,cVar20 - cVar24,DAT_00031e14,uVar12,0);
            iVar7 = FUN_000366e0(piVar17);
            if (iVar7 != 0) {
              FUN_0002f9bc(piVar17);
              FUN_0002f9fc(4,_DAT_00031e18);
            }
            break;
          }
          iVar11 = FUN_000366e0(_DAT_00031da0);
          if (iVar11 != 0) {
            FUN_0002f9bc(uVar10);
            FUN_0002f9fc(6,s_MM__PRIORITY1_management_message_00031e84);
          }
          *(undefined1 *)(*(int *)(*param_1 + 0x274) + 4) =
               *(undefined1 *)(*(int *)(param_2 + 0xc) + 0x36);
          uVar12 = (uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff;
          uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
          FUN_00035c1c(param_1,uVar4,iVar7 + 0x14,uVar12);
          iVar7 = FUN_000366e0(uVar10);
        }
        if (iVar7 == 0) break;
        uVar10 = FUN_0002f9bc(uVar10);
        pcVar15 = s_MM__PRIORITY1_response_managemen_00031e4c;
        goto LAB_000301f4;
      case 3:
        iVar7 = FUN_000366e0(_DAT_00031da0);
        if (iVar7 != 0) {
          FUN_0002f9bc(_DAT_00031da0);
          FUN_0002f9fc(6,s_MM__PRIORITY2_management_message_00031eb4);
        }
        uVar10 = _DAT_00031da0;
        iVar9 = *(int *)(param_2 + 0xc);
        iVar7 = iVar9 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar9 + 0x2a),*(undefined1 *)(iVar9 + 0x2b));
        if ((uVar12 != *(ushort *)(*param_1 + 2)) && (uVar12 != DAT_00031e0c)) {
          iVar7 = FUN_000366e0(piVar17);
          if (iVar7 != 0) {
            uVar10 = FUN_0002f9bc(piVar17);
            FUN_00031c64(uVar10,DAT_00031ee0);
            return;
          }
          break;
        }
        if ((*(byte *)(iVar9 + 0x2e) & 0xf) == 0) {
LAB_00031c6a:
          uVar10 = _DAT_00031da0;
          iVar11 = FUN_000366e0(_DAT_00031da0);
          if (iVar11 != 0) {
            FUN_0002f9bc(uVar10);
            FUN_0002f9fc(6,s___MM__PRIORITY2_management_messa_00031ee6 + 2);
          }
          uVar12 = (uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff;
          uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
          FUN_00035d10(param_1,uVar4,iVar9 + 0x14,uVar12);
          iVar7 = FUN_000366e0(uVar10);
        }
        else {
          if ((*(byte *)(iVar9 + 0x2e) & 0xf) != 1) {
            uVar12 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x34));
            uVar12 = uVar12 & 0xffff;
            cVar20 = *(char *)(iVar7 + 0xc);
            cVar24 = *(char *)(iVar7 + 0xd);
            uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
            iVar7 = DAT_00031e14;
            FUN_00035a48(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24,DAT_00031e14,uVar12,0);
            iVar11 = FUN_000366e0(piVar17);
            if (iVar11 == 0) break;
            FUN_0002f9bc(piVar17);
            FUN_0002fb2a(4,_DAT_00031ee4);
            goto LAB_00031c6a;
          }
          iVar11 = FUN_000366e0(_DAT_00031da0);
          if (iVar11 != 0) {
            FUN_0002f9bc(uVar10);
            FUN_0002f9fc(6,s_MM__PRIORITY2_management_message_00031f18);
          }
          *(undefined1 *)(*(int *)(*param_1 + 0x274) + 10) =
               *(undefined1 *)(*(int *)(param_2 + 0xc) + 0x36);
          uVar12 = (uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff;
          uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
          FUN_00035d10(param_1,uVar4,iVar9 + 0x14,uVar12);
          iVar7 = FUN_000366e0(uVar10);
        }
        if (iVar7 != 0) {
          uVar10 = FUN_0002f9bc(uVar10);
          pcVar15 = s_MM__PRIORITY2_response_managemen_00031f48;
LAB_00030324:
          FUN_0002fdfe(uVar10,pcVar15);
          return;
        }
        break;
      case 4:
        iVar7 = FUN_000366e0(_DAT_00031da0);
        if (iVar7 != 0) {
          FUN_0002f9bc(_DAT_00031da0);
          FUN_0002f9fc(6,s_MM__DOMAIN_management_message_re_00031f80);
        }
        piVar16 = _DAT_000323b4;
        iVar9 = *(int *)(param_2 + 0xc);
        iVar7 = iVar9 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar9 + 0x2a),*(undefined1 *)(iVar9 + 0x2b));
        if ((uVar12 != *(ushort *)(*param_1 + 2)) && (uVar12 != DAT_00031e0c)) {
          iVar7 = FUN_000366e0(piVar17);
          if (iVar7 == 0) break;
          uVar13 = FUN_0002f9bc(piVar17);
          uVar10 = DAT_000323a8;
          goto LAB_00031fb0;
        }
        if ((*(byte *)(iVar9 + 0x2e) & 0xf) == 0) {
          iVar11 = FUN_000366e0(_DAT_000323b4);
          if (iVar11 != 0) {
            FUN_0002f9bc(piVar16);
            FUN_0002f9fc(6,s__MM__DOMAIN_management_message_a_000323b7 + 1);
          }
          uVar12 = (uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff;
          uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
          FUN_00035674(param_1,uVar4,iVar9 + 0x14,uVar12);
          iVar7 = FUN_000366e0(piVar16);
          if (iVar7 == 0) break;
        }
        else {
          if ((*(byte *)(iVar9 + 0x2e) & 0xf) != 1) {
            uVar12 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x34));
            uVar12 = uVar12 & 0xffff;
            cVar20 = *(char *)(iVar7 + 0xc);
            cVar24 = *(char *)(iVar7 + 0xd);
            uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
            FUN_00035a48(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24,DAT_000323ac,uVar12,0);
            iVar7 = FUN_000366e0(piVar17);
            if (iVar7 != 0) {
              uVar10 = FUN_0002f9bc(piVar17);
              FUN_00031c64(uVar10,DAT_000323b0);
              return;
            }
            break;
          }
          iVar11 = FUN_000366e0(_DAT_000323b4);
          if (iVar11 != 0) {
            FUN_0002f9bc(piVar16);
            FUN_0002f9fc(6,s_MM__DOMAIN_management_message_ac_000323e8);
          }
          FUN_0002c3d0(*(undefined4 *)(*param_1 + 0x274),
                       *(undefined1 *)(*(int *)(param_2 + 0xc) + 0x36));
          uVar12 = (uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff;
          uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
          FUN_00035674(param_1,uVar4,iVar9 + 0x14,uVar12);
          iVar7 = FUN_000366e0(piVar16);
          bVar23 = iVar7 == 0;
LAB_000320e4:
          if (bVar23) break;
        }
        uVar10 = FUN_0002f9bc(piVar16);
        pcVar15 = s_MM__DOMAIN_response_management_m_00032418;
        goto LAB_000301f4;
      case 5:
        iVar7 = FUN_000366e0(_DAT_000323b4);
        if (iVar7 != 0) {
          FUN_0002f9bc(_DAT_000323b4);
          FUN_0002f9fc(6,s_MM__SLAVE_ONLY_management_messag_0003244c);
        }
        piVar16 = _DAT_000323b4;
        iVar7 = *(int *)(param_2 + 0xc);
        iVar9 = iVar7 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar7 + 0x2a),*(undefined1 *)(iVar7 + 0x2b));
        if ((uVar12 != *(ushort *)(*param_1 + 2)) && (uVar12 != DAT_00032478)) {
          iVar7 = FUN_000366e0(piVar17);
          bVar23 = iVar7 == 0;
          piVar16 = piVar17;
LAB_00032148:
          if (!bVar23) {
            uVar13 = FUN_0002f9bc(piVar16);
            uVar10 = DAT_0003247c;
LAB_00032152:
            FUN_00031c64(uVar13,uVar10);
            return;
          }
          break;
        }
        if ((*(byte *)(iVar7 + 0x2e) & 0xf) == 0) {
          iVar11 = FUN_000366e0(_DAT_000323b4);
          if (iVar11 != 0) {
            FUN_0002f9bc(piVar16);
            FUN_0002f9fc(6,s___MM__SLAVE_ONLY_management_mess_00032482 + 2);
          }
          uVar12 = (uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff;
          uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
          FUN_00035e04(param_1,uVar4,iVar7 + 0x14,uVar12);
          iVar7 = FUN_000366e0(piVar16);
          bVar23 = true;
          if (iVar7 == 0) goto LAB_00032148;
        }
        else {
          if ((*(byte *)(iVar7 + 0x2e) & 0xf) != 1) {
            uVar12 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x34));
            uVar12 = uVar12 & 0xffff;
            cVar20 = *(char *)(iVar9 + 0xc);
            cVar24 = *(char *)(iVar9 + 0xd);
            uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
            FUN_00035a48(param_1,uVar4,iVar7 + 0x14,cVar20 - cVar24,DAT_000323ac,uVar12,0);
            iVar7 = FUN_000366e0(piVar17);
            bVar23 = iVar7 == 0;
            piVar16 = piVar17;
            if (!bVar23) {
              uVar10 = FUN_0002f9bc(piVar17);
              FUN_00031c64(uVar10,_DAT_00032480);
              return;
            }
            goto LAB_000320e4;
          }
          iVar11 = FUN_000366e0(_DAT_000323b4);
          if (iVar11 != 0) {
            FUN_0002f9bc(piVar16);
            FUN_0002f9fc(6,s_MM__SLAVE_ONLY_management_messag_000324f0);
          }
          *(undefined1 *)(*(int *)(*param_1 + 0x274) + 0x14) =
               *(undefined1 *)(*(int *)(param_2 + 0xc) + 0x36);
          uVar12 = (uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff;
          uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
          FUN_00035e04(param_1,uVar4,iVar7 + 0x14,uVar12);
          iVar7 = FUN_000366e0(piVar16);
          if (iVar7 == 0) break;
        }
        uVar10 = FUN_0002f9bc(piVar16);
        pcVar15 = s_MM__SLAVE_ONLY_response_manageme_000324b8;
        goto LAB_000301f4;
      case 6:
        iVar7 = FUN_000366e0(_DAT_000323b4);
        if (iVar7 != 0) {
          FUN_0002f9bc(_DAT_000323b4);
          FUN_0002f9fc(6,s_MM__LOG_ANNOUNCE_INTERVAL_manage_00032524);
        }
        piVar16 = _DAT_000329b0;
        piVar1 = _DAT_000323b4;
        iVar9 = *(int *)(param_2 + 0xc);
        iVar7 = iVar9 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar9 + 0x2a),*(undefined1 *)(iVar9 + 0x2b));
        if ((uVar12 == *(ushort *)(*param_1 + 2)) || (uVar12 == DAT_00032478)) {
          if ((*(byte *)(iVar9 + 0x2e) & 0xf) == 0) {
            iVar11 = FUN_000366e0(_DAT_000323b4);
            if (iVar11 != 0) {
              FUN_0002f9bc(piVar1);
              FUN_0002f9fc(6,s___MM__log_announce_interval_mana_00032562 + 2);
            }
            uVar12 = (uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff;
            uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
            FUN_00035768(param_1,uVar4,iVar9 + 0x14,uVar12);
            iVar7 = FUN_000366e0(piVar1);
            piVar16 = piVar1;
          }
          else {
            if ((*(byte *)(iVar9 + 0x2e) & 0xf) != 1) {
              uVar12 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x34));
              uVar12 = uVar12 & 0xffff;
              cVar20 = *(char *)(iVar7 + 0xc);
              cVar24 = *(char *)(iVar7 + 0xd);
              uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
              FUN_00035a48(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24,DAT_000323ac,uVar12,0);
              iVar7 = FUN_000366e0(piVar17);
              if (iVar7 != 0) {
                uVar10 = FUN_0002f9bc(piVar17);
                FUN_00031c64(uVar10,_DAT_00032560);
                return;
              }
              break;
            }
            iVar11 = FUN_000366e0(_DAT_000329b0);
            if (iVar11 != 0) {
              FUN_0002f9bc(piVar16);
              FUN_0002f9fc(6,s__MM__log_announce_interval_manag_000329b3 + 1);
            }
            FUN_0003b028(*param_1,(int)*(char *)(*(int *)(param_2 + 0xc) + 0x36));
            uVar12 = (uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff;
            uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
            FUN_00035768(param_1,uVar4,iVar9 + 0x14,uVar12);
            iVar7 = FUN_000366e0(piVar16);
          }
          if (iVar7 != 0) {
            uVar10 = FUN_0002f9bc(piVar16);
            pcVar15 = DAT_000329ac;
            goto LAB_000301f4;
          }
        }
        else {
          iVar7 = FUN_000366e0(piVar17);
          if (iVar7 != 0) {
            uVar10 = FUN_0002f9bc(piVar17);
            FUN_00031c64(uVar10,DAT_0003255c);
            return;
          }
        }
        break;
      case 7:
        iVar7 = FUN_000366e0(_DAT_000329b0);
        if (iVar7 != 0) {
          FUN_0002f9bc(_DAT_000329b0);
          FUN_0002f9fc(6,s_MM__ANNOUNCE_RECEIPT_TIMEOUT_man_000329f0);
        }
        piVar16 = _DAT_000329b0;
        iVar9 = *(int *)(param_2 + 0xc);
        iVar7 = iVar9 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar9 + 0x2a),*(undefined1 *)(iVar9 + 0x2b));
        if ((uVar12 != *(ushort *)(*param_1 + 2)) && (uVar12 != DAT_00032a2c)) {
          iVar7 = FUN_000366e0(piVar17);
          if (iVar7 != 0) {
            uVar13 = FUN_0002f9bc(piVar17);
            uVar10 = DAT_00032a30;
            goto LAB_00031fb0;
          }
          break;
        }
        if ((*(byte *)(iVar9 + 0x2e) & 0xf) == 0) {
          iVar11 = FUN_000366e0(_DAT_000329b0);
          if (iVar11 != 0) {
            FUN_0002f9bc(piVar16);
            FUN_0002f9fc(6,s___MM__ANNOUNCE_RECEIPT_TIMEOUT_m_00032a3a + 2);
          }
          uVar12 = (uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff;
          uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
          FUN_000353a0(param_1,uVar4,iVar9 + 0x14,uVar12);
          iVar7 = FUN_000366e0(piVar16);
          if (iVar7 == 0) break;
        }
        else {
          if ((*(byte *)(iVar9 + 0x2e) & 0xf) != 1) {
            uVar12 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x34));
            uVar12 = uVar12 & 0xffff;
            cVar20 = *(char *)(iVar7 + 0xc);
            cVar24 = *(char *)(iVar7 + 0xd);
            uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
            FUN_00035a48(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24,DAT_00032a34,uVar12,0);
            iVar7 = FUN_000366e0(piVar17);
            if (iVar7 != 0) {
              uVar13 = FUN_0002f9bc(piVar17);
              uVar10 = _DAT_00032a38;
              goto LAB_00031fb0;
            }
            break;
          }
          iVar11 = FUN_000366e0(_DAT_000329b0);
          if (iVar11 != 0) {
            FUN_0002f9bc(piVar16);
            FUN_0002f9fc(6,s_MM__ANNOUNCE_RECEIPT_TIMEOUT_man_00032a7c);
          }
          FUN_0003af9c(*param_1,*(undefined1 *)(*(int *)(param_2 + 0xc) + 0x36));
          uVar12 = (uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff;
          uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
          FUN_000353a0(param_1,uVar4,iVar9 + 0x14,uVar12);
          iVar7 = FUN_000366e0(piVar16);
          bVar23 = iVar7 == 0;
LAB_000327b2:
          if (bVar23) break;
        }
        uVar10 = FUN_0002f9bc(piVar16);
        pcVar15 = _DAT_00032abc;
        goto LAB_000301f4;
      case 8:
        iVar7 = FUN_000366e0(_DAT_000329b0);
        if (iVar7 != 0) {
          FUN_0002f9bc(_DAT_000329b0);
          FUN_0002f9fc(6,s___MM__LOG_SYNC_INTERVAL_manageme_00032abe + 2);
        }
        piVar16 = _DAT_000329b0;
        iVar7 = *(int *)(param_2 + 0xc);
        iVar9 = iVar7 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar7 + 0x2a),*(undefined1 *)(iVar7 + 0x2b));
        if ((uVar12 != *(ushort *)(*param_1 + 2)) && (uVar12 != DAT_00032a2c)) {
          iVar7 = FUN_000366e0(piVar17);
          if (iVar7 == 0) break;
          uVar13 = FUN_0002f9bc(piVar17);
          uVar10 = DAT_00032af4;
          goto LAB_00032152;
        }
        if ((*(byte *)(iVar7 + 0x2e) & 0xf) == 0) {
          iVar11 = FUN_000366e0(_DAT_000329b0);
          if (iVar11 != 0) {
            FUN_0002f9bc(piVar16);
            FUN_0002f9fc(6,s___MM__log_sync_interval_manageme_00032afa + 2);
          }
          uVar12 = (uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff;
          uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
          FUN_00035954(param_1,uVar4,iVar7 + 0x14,uVar12);
          iVar7 = FUN_000366e0(piVar16);
        }
        else {
          if ((*(byte *)(iVar7 + 0x2e) & 0xf) != 1) {
            uVar12 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x34));
            uVar12 = uVar12 & 0xffff;
            cVar20 = *(char *)(iVar9 + 0xc);
            cVar24 = *(char *)(iVar9 + 0xd);
            uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
            FUN_00035a48(param_1,uVar4,iVar7 + 0x14,cVar20 - cVar24,DAT_00032a34,uVar12,0);
            iVar7 = FUN_000366e0(piVar17);
            bVar23 = iVar7 == 0;
            piVar16 = piVar17;
            if (!bVar23) {
              uVar13 = FUN_0002f9bc(piVar17);
              uVar10 = _DAT_00032af8;
              goto LAB_00032152;
            }
            goto LAB_000327b2;
          }
          iVar11 = FUN_000366e0(_DAT_000329b0);
          if (iVar11 != 0) {
            FUN_0002f9bc(piVar16);
            FUN_0002f9fc(6,s_MM__log_sync_interval_management_00032b34);
          }
          FUN_0003b11e(*param_1,(int)*(char *)(*(int *)(param_2 + 0xc) + 0x36));
          uVar12 = (uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff;
          uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
          FUN_00035954(param_1,uVar4,iVar7 + 0x14,uVar12);
          iVar7 = FUN_000366e0(piVar16);
        }
        if (iVar7 != 0) {
          uVar10 = FUN_0002f9bc(piVar16);
          pcVar15 = s_MM__log_sync_interval_response_m_00032b6c;
          goto LAB_000301f4;
        }
        break;
      case 9:
        iVar7 = FUN_000366e0(_DAT_000329b0);
        if (iVar7 != 0) {
          FUN_0002f9bc(_DAT_000329b0);
          FUN_0002f9fc(6,s_MM__VERSION_NUMBER_management_me_00032bac);
        }
        piVar16 = _DAT_00032fe8;
        iVar9 = *(int *)(param_2 + 0xc);
        iVar7 = iVar9 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar9 + 0x2a),*(undefined1 *)(iVar9 + 0x2b));
        if ((uVar12 == *(ushort *)(*param_1 + 2)) || (uVar12 == DAT_00032a2c)) {
          if ((*(byte *)(iVar9 + 0x2e) & 0xf) == 0) {
            iVar11 = FUN_000366e0(_DAT_00032fe8);
            if (iVar11 != 0) {
              FUN_0002f9bc(piVar16);
              FUN_0002f9fc(6,s__MM__VERSION_NUMBER_management_m_00032feb + 1);
            }
            uVar12 = (uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff;
            uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
            FUN_000364e0(param_1,uVar4,iVar9 + 0x14,uVar12);
            iVar7 = FUN_000366e0(piVar16);
          }
          else {
            if ((*(byte *)(iVar9 + 0x2e) & 0xf) != 1) {
              uVar12 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x34));
              uVar12 = uVar12 & 0xffff;
              local_48 = (int *)((uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff)
              ;
              uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
              FUN_00035a48(param_1,uVar4,iVar9 + 0x14,local_48,DAT_00032fe0,uVar12,0);
              iVar7 = FUN_000366e0(piVar17);
              if (iVar7 != 0) {
                uVar13 = FUN_0002f9bc(piVar17);
                uVar10 = DAT_00032fe4;
                goto LAB_00031fb0;
              }
              break;
            }
            iVar11 = FUN_000366e0(_DAT_00032fe8);
            if (iVar11 != 0) {
              FUN_0002f9bc(piVar16);
              FUN_0002f9fc(6,s_MM__VERSION_NUMBER_management_me_00033060);
            }
            *(byte *)(*param_1 + 0x26f) = *(byte *)(*(int *)(param_2 + 0xc) + 0x36) & 0xf;
            uVar12 = (uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff;
            uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
            FUN_000364e0(param_1,uVar4,iVar9 + 0x14,uVar12);
            iVar7 = FUN_000366e0(piVar16);
          }
          if (iVar7 != 0) {
            uVar10 = FUN_0002f9bc(piVar16);
            pcVar15 = s_MM__VERSION_NUMBER_response_mana_00033024;
            goto LAB_000301f4;
          }
        }
        else {
          iVar7 = FUN_000366e0(piVar17);
          if (iVar7 != 0) {
            uVar13 = FUN_0002f9bc(piVar17);
            uVar10 = DAT_00032fdc;
            goto LAB_00031fb0;
          }
        }
        break;
      case 10:
        iVar7 = FUN_000366e0(_DAT_00032fe8);
        if (iVar7 != 0) {
          FUN_0002f9bc(_DAT_00032fe8);
          FUN_0002f9fc(6,s_MM__ENABLE_PORT_management_messa_00033098);
        }
        iVar7 = *(int *)(param_2 + 0xc);
        iVar9 = iVar7 + 0x30;
        iVar11 = iVar7 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar7 + 0x2a),*(undefined1 *)(iVar7 + 0x2b));
        if ((uVar12 == *(ushort *)(*param_1 + 2)) || (uVar12 == DAT_000330c8)) {
          if ((*(byte *)(iVar7 + 0x2e) & 0xf) != 3) {
            uVar12 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x34));
            uVar12 = uVar12 & 0xffff;
            cVar20 = *(char *)(iVar11 + 0xc);
            cVar24 = *(char *)(iVar11 + 0xd);
            uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
            FUN_00035a48(param_1,uVar4,iVar7 + 0x14,cVar20 - cVar24,DAT_00032fe0,uVar12,0);
            iVar7 = FUN_000366e0(piVar17);
            if (iVar7 != 0) {
              uVar13 = FUN_0002f9bc(piVar17);
              uVar10 = _DAT_000330d0;
              goto LAB_00031fb0;
            }
            break;
          }
          FUN_0002cbe0(*(undefined4 *)(*param_1 + 4),1);
          uVar12 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 4));
          piVar17 = (int *)(uVar12 & 0xffff);
          uVar12 = (uint)*(byte *)(iVar11 + 0xc) - (uint)*(byte *)(iVar11 + 0xd) & 0xff;
          uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
          FUN_000352dc(param_1,uVar4,iVar7 + 0x14,uVar12,piVar17);
          param_1 = _DAT_00032fe8;
          iVar7 = FUN_000366e0(_DAT_00032fe8);
          bVar23 = iVar7 == 0;
          goto LAB_00032e48;
        }
        iVar7 = FUN_000366e0(piVar17);
        bVar22 = iVar7 == 0;
LAB_00032d8a:
        if (bVar22) break;
        uVar13 = FUN_0002f9bc(piVar17);
        uVar10 = DAT_000330cc;
        goto LAB_00031fb0;
      }
      goto LAB_0002fc58;
    }
    if (iVar11 == 5) {
      iVar7 = FUN_000366e0(_DAT_000309e0);
      if (iVar7 != 0) {
        FUN_0002f9bc(_DAT_000309e0);
        FUN_0002f9fc(6,s__MM__INITIALIZE_management_messa_000309e3 + 1);
      }
      iVar7 = *(int *)(param_2 + 0xc);
      puVar8 = (undefined2 *)(iVar7 + 0x36);
      if (*(uint *)(param_2 + 8) < 0x38) {
        iVar7 = FUN_000366e0(piVar17);
        if (iVar7 != 0) {
          FUN_0002f9bc(piVar17);
          FUN_0002f9fc(4,DAT_00030a10);
        }
      }
      else {
        iVar9 = iVar7 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar7 + 0x2a),*(undefined1 *)(iVar7 + 0x2b));
        if ((uVar12 == *(ushort *)(*param_1 + 2)) || (uVar12 == DAT_00030a14)) {
          if ((*(byte *)(iVar7 + 0x2e) & 0xf) == 3) {
            iVar11 = FUN_0003b6a2(*puVar8);
            if ((iVar11 == 0) || (uVar12 = FUN_0003b6a2(*puVar8), DAT_00030a24 < uVar12)) {
              uVar4 = FUN_0003b6a2(*puVar8);
              FUN_0002cd84(*(undefined4 *)(*param_1 + 4),uVar4);
              uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x34));
              uVar12 = (uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff;
              uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
              FUN_000352dc(param_1,uVar5,iVar7 + 0x14,uVar12,uVar4);
              uVar10 = _DAT_000309e0;
              iVar7 = FUN_000366e0(_DAT_000309e0);
              if (iVar7 != 0) {
                uVar10 = FUN_0002f9bc(uVar10);
                pcVar15 = s___MM__INITIALIZE_acknowledge_man_00030a2a + 2;
                goto LAB_000301f4;
              }
            }
            else {
              iVar7 = FUN_000366e0(piVar17);
              if (iVar7 != 0) {
                FUN_0002f9bc(piVar17);
                FUN_0002f9fc(4,_DAT_00030a28);
              }
            }
          }
          else {
            local_44 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x34));
            local_44 = local_44 & 0xffff;
            cVar20 = *(char *)(iVar9 + 0xc);
            cVar24 = *(char *)(iVar9 + 0xd);
            uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
            FUN_00035a48(param_1,uVar4,iVar7 + 0x14,cVar20 - cVar24,DAT_00030a1c,local_44,0);
            iVar7 = FUN_000366e0(piVar17);
            if (iVar7 != 0) {
              FUN_0002f9bc(piVar17);
              FUN_0002f9fc(4,DAT_00030a20);
            }
          }
        }
        else {
          iVar7 = FUN_000366e0(piVar17);
          if (iVar7 != 0) {
            FUN_0002f9bc(piVar17);
            FUN_0002f9fc(4,DAT_00030a18);
          }
        }
      }
      goto LAB_0002fc58;
    }
    if (iVar11 < 6) {
      switch(iVar11) {
      case 0:
        iVar7 = FUN_000366e0(_DAT_0002fe88);
        if (iVar7 != 0) {
          FUN_0002f9bc(_DAT_0002fe88);
          FUN_0002f9fc(6,s___MM__NULL_MANAGEMENT_management_0002fed2 + 2);
        }
        uVar10 = _DAT_0002fe88;
        iVar9 = *(int *)(param_2 + 0xc);
        iVar7 = iVar9 + 0x30;
        bVar3 = *(byte *)(iVar9 + 0x2e) & 0xf;
        if ((*(byte *)(iVar9 + 0x2e) & 0xf) == 0) {
          iVar7 = FUN_000366e0(_DAT_0002fe88);
          if (iVar7 != 0) {
            FUN_0002f9bc(uVar10);
            FUN_0002f9fc(6,s___MM__NULL_MANAGEMENT_management_0002ff0e + 2);
          }
          cVar20 = *(char *)(iVar9 + 0x2c);
          cVar24 = *(char *)(iVar9 + 0x2d);
          uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
          FUN_00035b58(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24);
          iVar7 = FUN_000366e0(uVar10);
        }
        else {
          if (bVar3 != 1) {
            if (bVar3 == 3) {
              iVar11 = FUN_000366e0(_DAT_0002fe88);
              if (iVar11 != 0) {
                FUN_0002f9bc(_DAT_0002fe88);
                FUN_0002f9fc(6,s_MM__NULL_MANAGEMENT_management_m_0002ffc0);
              }
              uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 4));
              cVar20 = *(char *)(iVar9 + 0x2c);
              cVar24 = *(char *)(iVar9 + 0x2d);
              uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
              FUN_000352dc(param_1,uVar5,iVar9 + 0x14,cVar20 - cVar24,uVar4);
              uVar10 = _DAT_0002fe88;
              iVar7 = FUN_000366e0(_DAT_0002fe88);
              if (iVar7 != 0) {
                FUN_0002f9bc(uVar10);
                FUN_0002fb2a(6,s_MM__NULL_MANAGEMENT_acknowledge_m_0002fffc);
                return;
              }
            }
            else {
              uVar12 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x34));
              uVar12 = uVar12 & 0xffff;
              cVar20 = *(char *)(iVar9 + 0x2c);
              cVar24 = *(char *)(iVar9 + 0x2d);
              uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
              FUN_00035a48(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24,DAT_0002ff08,uVar12,0);
              iVar7 = FUN_000366e0(piVar17);
              if (iVar7 != 0) {
                FUN_0002f9bc(piVar17);
                FUN_0002f9fc(4,_DAT_0002ff0c);
              }
            }
            break;
          }
          iVar7 = FUN_000366e0(_DAT_0002fe88);
          if (iVar7 != 0) {
            FUN_0002f9bc(uVar10);
            FUN_0002f9fc(6,s_MM__NULL_MANAGEMENT_management_m_0002ff88);
          }
          cVar20 = *(char *)(iVar9 + 0x2c);
          cVar24 = *(char *)(iVar9 + 0x2d);
          uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
          FUN_00035b58(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24);
          iVar7 = FUN_000366e0(uVar10);
        }
        if (iVar7 != 0) {
          uVar10 = FUN_0002f9bc(uVar10);
          FUN_0002fdfe(uVar10,s_MM__NULL_MANAGEMENT_response_man_0002ff48);
          return;
        }
        break;
      case 1:
        iVar7 = FUN_000366e0(_DAT_0002fe88);
        if (iVar7 != 0) {
          FUN_0002f9bc(uVar13);
          FUN_0002f9fc(6,s_MM__CLOCK_DESCRIPTION_management_0003003c);
        }
        FUN_00034ca4(param_1,param_2);
        break;
      case 2:
        iVar7 = FUN_000366e0(_DAT_00030458);
        if (iVar7 != 0) {
          FUN_0002f9bc(_DAT_00030458);
          FUN_0002f9fc(6,s__MM__USER_DESCRIPTION_management_0003045b + 1);
        }
        uVar10 = _DAT_00030458;
        iVar9 = *(int *)(param_2 + 0xc);
        iVar7 = iVar9 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar9 + 0x2a),*(undefined1 *)(iVar9 + 0x2b));
        if ((uVar12 == *(ushort *)(*param_1 + 2)) || (uVar12 == DAT_00030490)) {
          if ((*(byte *)(iVar9 + 0x2e) & 0xf) == 0) {
            iVar11 = FUN_000366e0(_DAT_00030458);
            if (iVar11 != 0) {
              FUN_0002f9bc(uVar10);
              FUN_0002f9fc(6,s___MM__USER_DESCRIPTION_managemen_0003049e + 2);
            }
            cVar20 = *(char *)(iVar7 + 0xc);
            cVar24 = *(char *)(iVar7 + 0xd);
            uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
            FUN_00036228(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24);
            iVar7 = FUN_000366e0(uVar10);
          }
          else {
            if ((*(byte *)(iVar9 + 0x2e) & 0xf) != 1) {
              uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x34));
              cVar20 = *(char *)(iVar7 + 0xc);
              cVar24 = *(char *)(iVar7 + 0xd);
              uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
              FUN_00035a48(param_1,uVar5,iVar9 + 0x14,cVar20 - cVar24,DAT_00030498,uVar4,0);
              iVar7 = FUN_000366e0(piVar17);
              if (iVar7 != 0) {
                FUN_0002f9bc(piVar17);
                FUN_0002f9fc(4,_DAT_0003049c);
              }
              break;
            }
            iVar11 = FUN_000366e0(_DAT_00030458);
            if (iVar11 != 0) {
              FUN_0002f9bc(uVar10);
              FUN_0002f9fc(6,s_MM__USER_DESCRIPTION_management_m_000304d8);
            }
            FUN_0002bda8(*(int *)(param_2 + 0xc) + 0x36);
            cVar20 = *(char *)(iVar7 + 0xc);
            cVar24 = *(char *)(iVar7 + 0xd);
            uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
            FUN_00036228(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24);
            iVar7 = FUN_000366e0(uVar10);
          }
          if (iVar7 != 0) {
            uVar10 = FUN_0002f9bc(uVar10);
            pcVar15 = s_MM__USER_DESCRIPTION_response_ma_00030510;
            goto LAB_000301f4;
          }
        }
        else {
          iVar7 = FUN_000366e0(piVar17);
          if (iVar7 != 0) {
            FUN_0002f9bc(piVar17);
            FUN_0002f9fc(4,DAT_00030494);
          }
        }
        break;
      case 3:
        iVar7 = FUN_000366e0(_DAT_00030458);
        if (iVar7 != 0) {
          FUN_0002f9bc(_DAT_00030458);
          FUN_0002f9fc(6,s_MM__SAVE_IN_NON_VOLATILE_STORAGE_00030550);
        }
        iVar11 = *(int *)(param_2 + 0xc);
        iVar7 = iVar11 + 0x30;
        iVar9 = iVar11 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar11 + 0x2a),*(undefined1 *)(iVar11 + 0x2b));
        if ((uVar12 != *(ushort *)(*param_1 + 2)) && (uVar12 != DAT_00030490)) {
          iVar7 = FUN_000366e0(piVar17);
          if (iVar7 != 0) {
            FUN_0002f9bc(piVar17);
            FUN_0002f9fc(4,DAT_00030590);
          }
          break;
        }
        if ((*(byte *)(iVar11 + 0x2e) & 0xf) != 3) {
          uVar12 = FUN_0003b6a2(*(undefined2 *)(iVar11 + 0x34));
          uVar12 = uVar12 & 0xffff;
          local_48 = (int *)((uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff);
          uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar11 + 0x1e));
          FUN_00035a48(param_1,uVar4,iVar11 + 0x14,local_48,DAT_00030498,uVar12,0);
          iVar7 = FUN_000366e0(piVar17);
          if (iVar7 != 0) {
            FUN_0002f9bc(piVar17);
            FUN_0002f9fc(4,DAT_00030594);
          }
          break;
        }
        FUN_0002cdae(*(undefined4 *)(*param_1 + 4));
        uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 4));
        uVar12 = (uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff;
        uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar11 + 0x1e));
        FUN_000352dc(param_1,uVar5,iVar11 + 0x14,uVar12,uVar4);
        uVar10 = _DAT_00030458;
        iVar7 = FUN_000366e0(_DAT_00030458);
        if (iVar7 == 0) break;
        uVar10 = FUN_0002f9bc(uVar10);
        pcVar15 = _DAT_00030598;
        goto LAB_00030324;
      case 4:
        iVar7 = FUN_000366e0(_DAT_00030458);
        if (iVar7 != 0) {
          FUN_0002f9bc(_DAT_00030458);
          FUN_0002f9fc(6,s___MM__RESET_NON_VOLATILE_STORAGE_0003059a + 2);
        }
        iVar11 = *(int *)(param_2 + 0xc);
        iVar7 = iVar11 + 0x30;
        iVar9 = iVar11 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar11 + 0x2a),*(undefined1 *)(iVar11 + 0x2b));
        if ((uVar12 == *(ushort *)(*param_1 + 2)) || (uVar12 == DAT_00030490)) {
          if ((*(byte *)(iVar11 + 0x2e) & 0xf) == 3) {
            FUN_0002cda6(*(undefined4 *)(*param_1 + 4));
            uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 4));
            uVar12 = (uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff;
            uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar11 + 0x1e));
            FUN_000352dc(param_1,uVar5,iVar11 + 0x14,uVar12,uVar4);
            uVar10 = _DAT_00030458;
            iVar7 = FUN_000366e0(_DAT_00030458);
            if (iVar7 != 0) {
              uVar10 = FUN_0002f9bc(uVar10);
              pcVar15 = DAT_000305e0;
LAB_00030456:
              FUN_0002fdfe(uVar10,pcVar15);
              return;
            }
          }
          else {
            uVar12 = FUN_0003b6a2(*(undefined2 *)(iVar11 + 0x34));
            uVar12 = uVar12 & 0xffff;
            local_48 = (int *)((uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff);
            uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar11 + 0x1e));
            FUN_00035a48(param_1,uVar4,iVar11 + 0x14,local_48,DAT_00030498,uVar12,0);
            iVar7 = FUN_000366e0(piVar17);
            if (iVar7 != 0) {
              FUN_0002f9bc(piVar17);
              FUN_0002f9fc(4,DAT_000305dc);
            }
          }
        }
        else {
          iVar7 = FUN_000366e0(piVar17);
          if (iVar7 != 0) {
            FUN_0002f9bc(piVar17);
            FUN_0002f9fc(4,DAT_000305d8);
          }
        }
        break;
      default:
        goto switchD_0002fb0c_default;
      }
      goto LAB_0002fc58;
    }
    iVar9 = iVar11 + -0x2000;
    if (iVar11 == 0x2000) {
      iVar7 = FUN_000366e0(_DAT_00030ea0);
      if (iVar7 != 0) {
        FUN_0002f9bc(_DAT_00030ea0);
        FUN_0002f9fc(6,s_MM__DEFAULT_DATA_SET_management_m_00030f5c);
      }
      iVar7 = *(int *)(param_2 + 0xc);
      uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar7 + 0x2a),*(undefined1 *)(iVar7 + 0x2b));
      if ((uVar12 == *(ushort *)(*param_1 + 2)) || (uVar12 == DAT_00030f10)) {
        if ((*(byte *)(iVar7 + 0x2e) & 0xf) == 0) {
          iVar9 = iVar7;
          local_44 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
          local_44 = local_44 & 0xffff;
          iVar9 = iVar9 + 0x14;
          cVar20 = *(char *)(iVar7 + 0x2c) - *(char *)(iVar7 + 0x2d);
          pcVar15 = *(char **)(*param_1 + 0x274);
          FUN_0003b64e(s___dFI_MM__DEFAULT_DATASET_respon_00030f9a._2_4_,0,1000);
          pbVar2 = local_38;
          pbVar18 = local_3c;
          local_48 = (int *)s___dFI_MM__DEFAULT_DATASET_respon_00030f9a._2_4_;
          local_40 = 0x4c;
          FUN_0003b646(uVar10,iVar9,10);
          *(char *)(iVar26 + 0xc) = cVar20;
          *(char *)(iVar26 + 0xd) = cVar20;
          *(undefined1 *)(iVar26 + 0xe) = 2;
          uVar4 = FUN_0003b618(1);
          *(undefined2 *)pbVar18 = uVar4;
          uVar4 = FUN_0003b618(0x18);
          *(undefined2 *)(pbVar18 + 2) = uVar4;
          uVar4 = FUN_0003b618(0x2000);
          *(undefined2 *)(pbVar18 + 4) = uVar4;
          if (*pcVar15 != '\0') {
            *pbVar2 = *pbVar2 | 1;
          }
          if (pcVar15[0x14] != '\0') {
            *pbVar2 = *pbVar2 | 2;
          }
          FUN_0003b646(pbVar2 + 0xb,pcVar15 + 0xb,8);
          uVar4 = FUN_0003b618(*(undefined2 *)(pcVar15 + 2));
          *(undefined2 *)(pbVar2 + 2) = uVar4;
          pbVar2[7] = pcVar15[7];
          pbVar2[6] = pcVar15[6];
          uVar4 = FUN_0003b618(*(undefined2 *)(pcVar15 + 8));
          *(undefined2 *)(pbVar2 + 8) = uVar4;
          pbVar2[4] = pcVar15[4];
          pbVar2[10] = pcVar15[10];
          pbVar2[0x13] = pcVar15[0x13];
          FUN_0003661e(&local_34);
          iVar7 = *param_1;
          FUN_0003665c(&local_34,s___dFI_MM__DEFAULT_DATASET_respon_00030f9a._2_4_,local_40,0xd,
                       *(undefined1 *)(iVar7 + 0x3b4),0,(int)*(short *)(iVar7 + 0x3b6),
                       *(undefined1 *)(iVar7 + 0x3b8),*(undefined1 *)(iVar7 + 0x3e0));
          FUN_00035140(param_1,local_48,local_44,local_40);
          FUN_00039a50(*(undefined2 *)(*param_1 + 2),&local_34);
          uVar10 = _DAT_00030ea0;
          iVar7 = FUN_000366e0(_DAT_00030ea0);
          if (iVar7 != 0) {
            uVar10 = FUN_0002f9bc(uVar10);
            pcVar15 = s___dFI_MM__DEFAULT_DATASET_respon_00030f9a + 6;
            goto LAB_000301f4;
          }
        }
        else {
          iVar9 = iVar7;
          uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x34));
          cVar20 = *(char *)(iVar7 + 0x2c);
          cVar24 = *(char *)(iVar7 + 0x2d);
          uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
          FUN_00035a48(param_1,uVar5,iVar9 + 0x14,cVar20 - cVar24,DAT_00030f94,uVar4,0);
          iVar7 = FUN_000366e0(piVar17);
          if (iVar7 != 0) {
            FUN_0002f9bc(piVar17);
            FUN_0002f9fc(4,_DAT_00030f98);
          }
        }
      }
      else {
        iVar7 = FUN_000366e0(piVar17);
        if (iVar7 != 0) {
          FUN_0002f9bc(piVar17);
          FUN_0002f9fc(4,DAT_00030f90);
        }
      }
      goto LAB_0002fc58;
    }
    if (iVar11 < 0x2001) {
      if (iVar11 == 6) {
        iVar7 = FUN_000366e0(_DAT_000309e0);
        if (iVar7 != 0) {
          FUN_0002f9bc(_DAT_000309e0);
          FUN_0002f9fc(6,s_MM__FAULT_LOG_management_message_00030a68);
        }
        iVar7 = *(int *)(param_2 + 0xc);
        if ((*(byte *)(iVar7 + 0x2e) & 0xf) == 0) {
          iVar9 = iVar7;
          local_48 = param_1;
          local_40 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
          local_40 = local_40 & 0xffff;
          iVar9 = iVar9 + 0x14;
          cVar20 = *(char *)(iVar7 + 0x2c) - *(char *)(iVar7 + 0x2d);
          iVar7 = FUN_00036708();
          FUN_0003b64e(DAT_00030a98,0,1000);
          pbVar18 = local_3c;
          local_34 = DAT_00030a98;
          uVar14 = 0x38;
          FUN_0003b646(uVar10,iVar9,10);
          *(char *)(iVar26 + 0xc) = cVar20;
          *(char *)(iVar26 + 0xd) = cVar20;
          *(undefined1 *)(iVar26 + 0xe) = 2;
          uVar4 = FUN_0003b618(1);
          *(undefined2 *)pbVar18 = uVar4;
          uVar4 = FUN_0003b618(4);
          *(undefined2 *)(pbVar18 + 2) = uVar4;
          uVar4 = FUN_0003b618(6);
          *(undefined2 *)(pbVar18 + 4) = uVar4;
          uVar12 = 0;
          if (iVar7 != 0) {
            uVar12 = FUN_0002f7ea();
            uVar12 = uVar12 & 0xffff;
          }
          uVar4 = FUN_0003b618();
          uVar19 = 0;
          *(undefined2 *)local_38 = uVar4;
          if (uVar12 != 0) {
            do {
              puVar8 = (undefined2 *)FUN_0002f788(iVar7,uVar19);
              uVar4 = FUN_0003b618(*puVar8);
              local_44 = CONCAT22(local_44._2_2_,uVar4);
              FUN_0003b646(DAT_00030a98 + uVar14,&local_44,2);
              uVar14 = uVar14 + 2 & 0xffff;
              FUN_0003b646(DAT_00030a98 + uVar14,puVar8 + 1,10);
              uVar14 = uVar14 + 10 & 0xffff;
              FUN_0003b646(DAT_00030a98 + uVar14,puVar8 + 6,1);
              uVar14 = uVar14 + 1 & 0xffff;
              FUN_0003b646(DAT_00030a98 + uVar14,puVar8 + 8,1);
              uVar14 = uVar14 + 1 & 0xffff;
              if (*(char *)(puVar8 + 8) != '\0') {
                FUN_0003b646(DAT_00030a98 + uVar14,*(undefined4 *)(puVar8 + 10));
                uVar14 = *(byte *)(puVar8 + 8) + uVar14 & 0xffff;
              }
              FUN_0003b646(DAT_00030a98 + uVar14,puVar8 + 0xc,1);
              uVar14 = uVar14 + 1 & 0xffff;
              if (*(char *)(puVar8 + 0xc) != '\0') {
                FUN_0003b646(DAT_00030a98 + uVar14,*(undefined4 *)(puVar8 + 0xe));
                uVar14 = *(byte *)(puVar8 + 0xc) + uVar14 & 0xffff;
              }
              pbVar18 = (byte *)(puVar8 + 0x10);
              local_3c = pbVar18;
              FUN_0003b646(DAT_00030a98 + uVar14,pbVar18,1);
              uVar14 = uVar14 + 1 & 0xffff;
              if (*local_3c != 0) {
                FUN_0003b646(DAT_00030a98 + uVar14,*(undefined4 *)(puVar8 + 0x12));
                uVar14 = *pbVar18 + uVar14 & 0xffff;
              }
              uVar19 = uVar19 + 1 & 0xff;
            } while (uVar19 < uVar12);
          }
          FUN_0003661e(auStack_30);
          iVar7 = *local_48;
          FUN_0003665c(auStack_30,DAT_00030a98,uVar14,0xd,*(undefined1 *)(iVar7 + 0x3b4),0,
                       (int)*(short *)(iVar7 + 0x3b6),*(undefined1 *)(iVar7 + 0x3b8),
                       *(undefined1 *)(iVar7 + 0x3e0));
          FUN_00035140(local_48,local_34,local_40,uVar14);
          FUN_00039a50(*(undefined2 *)(*local_48 + 2),auStack_30);
          uVar10 = _DAT_00030ea0;
          iVar7 = FUN_000366e0(_DAT_00030ea0);
          if (iVar7 != 0) {
            uVar10 = FUN_0002f9bc(uVar10);
            pcVar15 = s__MM__FAULT_LOG_response_manageme_00030ea3 + 1;
            goto LAB_00030324;
          }
        }
        else {
          iVar9 = iVar7;
          uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x34));
          cVar20 = *(char *)(iVar7 + 0x2c);
          cVar24 = *(char *)(iVar7 + 0x2d);
          uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
          FUN_00035a48(param_1,uVar5,iVar9 + 0x14,cVar20 - cVar24,DAT_00030a1c,uVar4,0);
          iVar7 = FUN_000366e0(piVar17);
          if (iVar7 != 0) {
            FUN_0002f9bc(piVar17);
            FUN_0002f9fc(4,DAT_00030a94);
          }
        }
        goto LAB_0002fc58;
      }
      if (iVar11 == 7) {
        iVar7 = FUN_000366e0(_DAT_00030ea0);
        if (iVar7 != 0) {
          FUN_0002f9bc(_DAT_00030ea0);
          FUN_0002f9fc(6,s_MM__FAULT_LOG_RESET_management_m_00030edc);
        }
        iVar7 = FUN_00036708();
        iVar9 = *(int *)(param_2 + 0xc);
        iVar11 = iVar9 + 0x20;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar9 + 0x2a),*(undefined1 *)(iVar9 + 0x2b));
        if ((uVar12 == *(ushort *)(*param_1 + 2)) || (uVar12 == DAT_00030f10)) {
          if ((*(byte *)(iVar9 + 0x2e) & 0xf) == 3) {
            if (iVar7 != 0) {
              FUN_0002f59c();
            }
            uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x34));
            uVar12 = (uint)*(byte *)(iVar11 + 0xc) - (uint)*(byte *)(iVar11 + 0xd) & 0xff;
            uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
            FUN_000352dc(param_1,uVar5,iVar9 + 0x14,uVar12,uVar4);
            uVar10 = _DAT_00030ea0;
            iVar7 = FUN_000366e0(_DAT_00030ea0);
            if (iVar7 != 0) {
              uVar10 = FUN_0002f9bc(uVar10);
              pcVar15 = s___MM__FAULT_LOG_RESET_acknowledg_00030f1a + 2;
              goto LAB_00030456;
            }
          }
          else {
            uVar12 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x34));
            uVar12 = uVar12 & 0xffff;
            cVar20 = *(char *)(iVar11 + 0xc);
            cVar24 = *(char *)(iVar11 + 0xd);
            uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
            FUN_00035a48(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24,6,uVar12,0);
            iVar7 = FUN_000366e0(piVar17);
            if (iVar7 != 0) {
              FUN_0002f9bc(piVar17);
              FUN_0002f9fc(4,_DAT_00030f18);
            }
          }
        }
        else {
          iVar7 = FUN_000366e0(piVar17);
          if (iVar7 != 0) {
            FUN_0002f9bc(piVar17);
            FUN_0002f9fc(4,DAT_00030f14);
          }
        }
        goto LAB_0002fc58;
      }
    }
    else {
      if (iVar9 == 1) {
        FUN_00030e44();
        iVar9 = extraout_r2_00;
      }
      if (iVar9 == 2) {
        FUN_000311c0();
        iVar9 = extraout_r2_01;
        goto LAB_0002fb5a;
      }
    }
    goto switchD_0002fb0c_default;
  }
  cVar24 = SBORROW4(iVar9,0xb);
  cVar20 = iVar9 + -0xb < 0;
  uVar21 = iVar9 == 0xb;
  if ((bool)uVar21) {
    FUN_00034054();
    iVar9 = extraout_r1;
  }
  uVar10 = _DAT_0003417c;
  if (!(bool)uVar21 && cVar20 == cVar24) {
    cVar24 = SBORROW4(iVar9,0x11);
    cVar20 = iVar9 + -0x11 < 0;
    uVar21 = iVar9 == 0x11;
    if ((bool)uVar21) {
      FUN_00034504();
      iVar9 = extraout_r1_00;
    }
    uVar13 = DAT_0003478c;
    uVar10 = _DAT_0003417c;
    if (!(bool)uVar21 && cVar20 == cVar24) {
      if (iVar9 == 0x12) {
        FUN_00034578();
        iVar9 = extraout_r1_01;
      }
      if (iVar9 == 0x13) {
        FUN_000345ec();
        iVar9 = extraout_r1_02;
      }
      if (iVar9 + DAT_0002fecc == 0) {
        FUN_00034660();
      }
      else if (iVar9 + DAT_0002fecc == 1) {
        FUN_000349bc();
      }
switchD_0002fb0c_default:
      iVar9 = FUN_000366e0(piVar17);
      if (iVar9 != 0) {
        FUN_0002f9bc(piVar17);
        uVar10 = FUN_0003b6a2(puVar8[2]);
        FUN_0002f9fc(4,_DAT_0002fed0,uVar10);
      }
      uVar4 = FUN_0003b6a2(puVar8[2]);
      cVar20 = *(char *)(iVar7 + 0x2c);
      cVar24 = *(char *)(iVar7 + 0x2d);
      uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
      FUN_00035a48(param_1,uVar5,iVar7 + 0x14,cVar20 - cVar24,6,uVar4,0);
      goto LAB_0002fc58;
    }
    switch(iVar9) {
    case 0xc:
      iVar7 = FUN_000366e0(_DAT_0003417c);
      if (iVar7 != 0) {
        FUN_0002f9bc(uVar10);
        FUN_0002f9fc(6,s___MM__ACCEPTABLE_MASTER_TABLE_ma_00034326 + 2);
      }
      iVar7 = *(int *)(param_2 + 0xc);
      uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x34));
      local_48 = (int *)((uint)*(byte *)(iVar7 + 0x2c) - (uint)*(byte *)(iVar7 + 0x2d) & 0xff);
      uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
      FUN_00035a48(param_1,uVar5,iVar7 + 0x14,local_48,6,uVar4,0);
      iVar7 = FUN_000366e0(piVar17);
      bVar23 = true;
      if (iVar7 != 0) {
        uVar13 = FUN_0002f9bc(piVar17);
        uVar10 = DAT_00034364;
        goto LAB_00031fb0;
      }
      goto LAB_00034048;
    case 0xd:
      iVar7 = FUN_000366e0(_DAT_0003417c);
      if (iVar7 != 0) {
        FUN_0002f9bc(uVar10);
        FUN_0002f9fc(6,DAT_00034368);
      }
      iVar7 = *(int *)(param_2 + 0xc);
      uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x34));
      uVar12 = (uint)*(byte *)(iVar7 + 0x2c) - (uint)*(byte *)(iVar7 + 0x2d) & 0xff;
      uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
      FUN_00035a48(param_1,uVar5,iVar7 + 0x14,uVar12,6,uVar4,0);
      iVar7 = FUN_000366e0(piVar17);
      if (iVar7 != 0) {
        uVar13 = FUN_0002f9bc(piVar17);
        uVar10 = DAT_00034788;
        goto LAB_00031fb0;
      }
      goto LAB_0002fc58;
    case 0xe:
      iVar7 = FUN_000366e0(DAT_0003478c);
      if (iVar7 != 0) {
        FUN_0002f9bc(uVar13);
        FUN_0002f9fc(6,DAT_00034790);
      }
      iVar7 = *(int *)(param_2 + 0xc);
      uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x34));
      local_48 = (int *)((uint)*(byte *)(iVar7 + 0x2c) - (uint)*(byte *)(iVar7 + 0x2d) & 0xff);
      uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
      FUN_00035a48(param_1,uVar5,iVar7 + 0x14,local_48,6,uVar4,0);
      iVar7 = FUN_000366e0(piVar17);
      bVar23 = iVar7 == 0;
      break;
    case 0xf:
      iVar7 = FUN_000366e0(DAT_0003478c);
      if (iVar7 != 0) {
        FUN_0002f9bc(uVar13);
        FUN_0002f9fc(6,s___MM__ALTERNATE_MASTER_managemen_00034796 + 2);
      }
      iVar7 = *(int *)(param_2 + 0xc);
      uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x34));
      cVar20 = *(char *)(iVar7 + 0x2c);
      cVar24 = *(char *)(iVar7 + 0x2d);
      uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
      FUN_00035a48(param_1,uVar5,iVar7 + 0x14,cVar20 - cVar24,6,uVar4,0);
      iVar7 = FUN_000366e0(piVar17);
      if (iVar7 != 0) {
        uVar13 = FUN_0002f9bc(piVar17);
        uVar10 = _DAT_000347cc;
        goto LAB_00031fb0;
      }
      goto LAB_0002fc58;
    case 0x10:
      iVar7 = FUN_000366e0(DAT_0003478c);
      if (iVar7 != 0) {
        FUN_0002f9bc(uVar13);
        FUN_0002f9fc(6,s___MM__ALTERNATE_TIME_OFFSET_ENAB_000347ce + 2);
      }
      iVar7 = *(int *)(param_2 + 0xc);
      uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x34));
      cVar20 = *(char *)(iVar7 + 0x2c);
      cVar24 = *(char *)(iVar7 + 0x2d);
      uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
      FUN_00035a48(param_1,uVar5,iVar7 + 0x14,cVar20 - cVar24,6,uVar4,0);
      iVar7 = FUN_000366e0(piVar17);
      bVar23 = true;
      if (iVar7 != 0) {
        uVar13 = FUN_0002f9bc(piVar17);
        uVar10 = _DAT_00034810;
        goto LAB_00031fb0;
      }
      break;
    default:
      goto switchD_0002fb0c_default;
    }
    if (!bVar23) {
      uVar13 = FUN_0002f9bc(piVar17);
      uVar10 = _DAT_00034794;
      goto LAB_00031fb0;
    }
    goto LAB_0002fc58;
  }
  switch(iVar9) {
  default:
    goto switchD_0002fb0c_default;
  case 1:
    iVar7 = FUN_000366e0(_DAT_00032fe8);
    if (iVar7 != 0) {
      FUN_0002f9bc(_DAT_00032fe8);
      FUN_0002f9fc(6,s_MM__TIME_management_message_rece_00033188);
    }
    piVar16 = _DAT_000335dc;
    iVar7 = *(int *)(param_2 + 0xc);
    iVar9 = iVar7 + 0x20;
    uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar7 + 0x2a),*(undefined1 *)(iVar7 + 0x2b));
    if ((uVar12 != *(ushort *)(*param_1 + 2)) && (uVar12 != DAT_000330c8)) {
      iVar7 = FUN_000366e0(piVar17);
      if (iVar7 != 0) {
        uVar13 = FUN_0002f9bc(piVar17);
        uVar10 = DAT_000331b0;
        goto LAB_00032152;
      }
      bVar23 = true;
LAB_00032e48:
      bVar22 = true;
      if (!bVar23) {
        uVar10 = FUN_0002f9bc(param_1);
        pcVar15 = s___MM__ENABLE_PORT_acknowledge_ma_000330d2 + 2;
        goto LAB_000301f4;
      }
      goto LAB_00032d8a;
    }
    if ((*(byte *)(iVar7 + 0x2e) & 0xf) == 0) {
      iVar11 = FUN_000366e0(_DAT_000335dc);
      if (iVar11 != 0) {
        FUN_0002f9bc(piVar16);
        FUN_0002f9fc(6,s__MM__TIME_management_message_act_000335df + 1);
      }
      uVar12 = (uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff;
      uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
      FUN_00035f04(param_1,uVar4,iVar7 + 0x14,uVar12);
      iVar7 = FUN_000366e0(piVar16);
      bVar23 = iVar7 == 0;
LAB_0003326c:
      if (bVar23) goto LAB_0002fc58;
      uVar10 = FUN_0002f9bc(piVar16);
      pcVar15 = s_MM__TIME_response_management_mes_0003360c;
      goto LAB_000301f4;
    }
    if ((*(byte *)(iVar7 + 0x2e) & 0xf) != 1) {
      uVar12 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x34));
      uVar12 = uVar12 & 0xffff;
      local_48 = (int *)((uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff);
      uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
      FUN_00035a48(param_1,uVar4,iVar7 + 0x14,local_48,DAT_000335d4,uVar12,0);
      iVar7 = FUN_000366e0(piVar17);
      if (iVar7 == 0) goto LAB_0002fc58;
      uVar13 = FUN_0002f9bc(piVar17);
      uVar10 = DAT_000335d8;
      goto LAB_00031fb0;
    }
    iVar11 = FUN_000366e0(_DAT_000335dc);
    if (iVar11 != 0) {
      FUN_0002f9bc(_DAT_000335dc);
      FUN_0002f9fc(6,s_MM__TIME_management_message_acti_00033640);
    }
    iVar11 = FUN_001d3498(*(int *)(*param_1 + 0x27c) + 0x1c,*(int *)(*param_1 + 0x274) + 0xb);
    if (iVar11 == 0) {
      uVar12 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x34));
      uVar12 = uVar12 & 0xffff;
      cVar20 = *(char *)(iVar9 + 0xc);
      cVar24 = *(char *)(iVar9 + 0xd);
      uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
      FUN_00035a48(param_1,uVar4,iVar7 + 0x14,cVar20 - cVar24,5,uVar12,0);
      iVar7 = FUN_000366e0(piVar17);
      bVar23 = iVar7 == 0;
      goto LAB_0003335a;
    }
    FUN_0003c28c(&local_48,*(int *)(param_2 + 0xc) + 0x36);
    FUN_0002bccc(&local_48);
    cVar20 = *(char *)(iVar9 + 0xc);
    cVar24 = *(char *)(iVar9 + 0xd);
    uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
    FUN_00035f04(param_1,uVar4,iVar7 + 0x14,cVar20 - cVar24);
    param_1 = _DAT_000335dc;
    iVar7 = FUN_000366e0(_DAT_000335dc);
    bVar23 = iVar7 == 0;
    break;
  case 2:
    iVar7 = FUN_000366e0(_DAT_000335dc);
    if (iVar7 != 0) {
      FUN_0002f9bc(_DAT_000335dc);
      FUN_0002f9fc(6,s___MM__CLOCK_ACCURACY_management_m_0003366d + 3);
    }
    piVar16 = _DAT_000335dc;
    iVar7 = *(int *)(param_2 + 0xc);
    iVar9 = iVar7 + 0x20;
    uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar7 + 0x2a),*(undefined1 *)(iVar7 + 0x2b));
    if ((uVar12 == *(ushort *)(*param_1 + 2)) || (uVar12 == DAT_000336a0)) {
      if ((*(byte *)(iVar7 + 0x2e) & 0xf) == 0) {
        iVar11 = FUN_000366e0(_DAT_000335dc);
        if (iVar11 != 0) {
          FUN_0002f9bc(piVar16);
          FUN_0002f9fc(6,s___MM__CLOCK_ACCURACY_management_m_000336aa + 2);
        }
        uVar12 = (uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff;
        uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
        FUN_00035494(param_1,uVar4,iVar7 + 0x14,uVar12);
        iVar7 = FUN_000366e0(piVar16);
        if (iVar7 == 0) goto LAB_0002fc58;
      }
      else {
        if ((*(byte *)(iVar7 + 0x2e) & 0xf) != 1) {
          uVar12 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x34));
          uVar12 = uVar12 & 0xffff;
          cVar20 = *(char *)(iVar9 + 0xc);
          cVar24 = *(char *)(iVar9 + 0xd);
          uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
          FUN_00035a48(param_1,uVar4,iVar7 + 0x14,cVar20 - cVar24,DAT_000335d4,uVar12,0);
          iVar7 = FUN_000366e0(piVar17);
          bVar23 = true;
          if (iVar7 != 0) {
            uVar13 = FUN_0002f9bc(piVar17);
            uVar10 = _DAT_000336a8;
            goto LAB_00031fb0;
          }
LAB_0003335a:
          piVar16 = piVar17;
          if (!bVar23) {
            uVar13 = FUN_0002f9bc(piVar17);
            uVar10 = _DAT_0003366c;
            goto LAB_00031fb0;
          }
          goto LAB_0003326c;
        }
        iVar11 = FUN_000366e0(_DAT_000335dc);
        if (iVar11 != 0) {
          FUN_0002f9bc(piVar16);
          FUN_0002f9fc(6,s_MM__CLOCK_ACCURACY_management_me_000336e4);
        }
        *(undefined1 *)(*(int *)(*param_1 + 0x274) + 7) =
             *(undefined1 *)(*(int *)(param_2 + 0xc) + 0x36);
        uVar12 = (uint)*(byte *)(iVar9 + 0xc) - (uint)*(byte *)(iVar9 + 0xd) & 0xff;
        uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
        FUN_00035494(param_1,uVar4,iVar7 + 0x14,uVar12);
        iVar7 = FUN_000366e0(piVar16);
        bVar23 = iVar7 == 0;
LAB_000334fa:
        if (bVar23) goto LAB_0002fc58;
      }
      uVar10 = FUN_0002f9bc(piVar16);
      pcVar15 = s_MM__CLOCK_ACCURACY_response_mana_0003371c;
      goto LAB_000301f4;
    }
    iVar7 = FUN_000366e0(piVar17);
    bVar23 = true;
    if (iVar7 != 0) {
      uVar13 = FUN_0002f9bc(piVar17);
      uVar10 = DAT_000336a4;
      goto LAB_00031fb0;
    }
    break;
  case 3:
    iVar7 = FUN_000366e0(_DAT_000335dc);
    if (iVar7 != 0) {
      FUN_0002f9bc(_DAT_000335dc);
      FUN_0002f9fc(6,s_MM__UTC_PROPERTIES_management_me_00033758);
    }
    piVar16 = _DAT_00033b7c;
    iVar9 = *(int *)(param_2 + 0xc);
    iVar7 = iVar9 + 0x20;
    uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar9 + 0x2a),*(undefined1 *)(iVar9 + 0x2b));
    if ((uVar12 != *(ushort *)(*param_1 + 2)) && (uVar12 != DAT_000336a0)) {
      iVar7 = FUN_000366e0(piVar17);
      if (iVar7 == 0) goto LAB_0002fc58;
      uVar13 = FUN_0002f9bc(piVar17);
      uVar10 = DAT_00033788;
      goto LAB_00031fb0;
    }
    if ((*(byte *)(iVar9 + 0x2e) & 0xf) == 0) {
      iVar11 = FUN_000366e0(_DAT_00033b7c);
      if (iVar11 != 0) {
        FUN_0002f9bc(piVar16);
        FUN_0002f9fc(6,s__MM__UTC_PROPERTIES_management_m_00033b7f + 1);
      }
      cVar20 = *(char *)(iVar7 + 0xc);
      cVar24 = *(char *)(iVar7 + 0xd);
      uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
      FUN_0003636c(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24);
      iVar7 = FUN_000366e0(piVar16);
    }
    else {
      if ((*(byte *)(iVar9 + 0x2e) & 0xf) != 1) {
        uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x34));
        cVar20 = *(char *)(iVar7 + 0xc);
        cVar24 = *(char *)(iVar7 + 0xd);
        uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
        FUN_00035a48(param_1,uVar5,iVar9 + 0x14,cVar20 - cVar24,DAT_000335d4,uVar4,0);
        iVar7 = FUN_000366e0(piVar17);
        bVar23 = true;
        piVar16 = piVar17;
        if (iVar7 != 0) {
          uVar13 = FUN_0002f9bc(piVar17);
          uVar10 = DAT_0003378c;
          goto LAB_00031fb0;
        }
        goto LAB_000334fa;
      }
      iVar11 = FUN_000366e0(_DAT_00033b7c);
      if (iVar11 != 0) {
        FUN_0002f9bc(piVar16);
        FUN_0002f9fc(6,s_MM__UTC_PROPERTIES_management_me_00033bf4);
      }
      iVar11 = *(int *)(param_2 + 0xc);
      sVar6 = FUN_0003b6a2((int)*(short *)(iVar11 + 0x36));
      FUN_0002bbe4((int)sVar6);
      FUN_0002bc40((*(byte *)(iVar11 + 0x38) & 1) != 0);
      FUN_0002bc34((int)((uint)*(byte *)(iVar11 + 0x38) << 0x1e) < 0);
      FUN_0002bdd8((int)((uint)*(byte *)(iVar11 + 0x38) << 0x1d) < 0);
      FUN_001f2624(*(undefined4 *)(*param_1 + 4));
      cVar20 = *(char *)(iVar7 + 0xc);
      cVar24 = *(char *)(iVar7 + 0xd);
      uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
      FUN_0003636c(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24);
      iVar7 = FUN_000366e0(piVar16);
    }
    if (iVar7 == 0) goto LAB_0002fc58;
    uVar10 = FUN_0002f9bc(piVar16);
    pcVar15 = s_MM__UTC_PROPERTIES_response_mana_00033bb8;
    goto LAB_000301f4;
  case 4:
    iVar7 = FUN_000366e0(_DAT_00033b7c);
    if (iVar7 != 0) {
      FUN_0002f9bc(_DAT_00033b7c);
      FUN_0002f9fc(6,s_MM__TRACEABILITY_PROPERTIES_mana_00033c2c);
    }
    piVar16 = _DAT_00033b7c;
    iVar9 = *(int *)(param_2 + 0xc);
    iVar7 = iVar9 + 0x20;
    uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar9 + 0x2a),*(undefined1 *)(iVar9 + 0x2b));
    if ((uVar12 == *(ushort *)(*param_1 + 2)) || (uVar12 == DAT_00033c68)) {
      if ((*(byte *)(iVar9 + 0x2e) & 0xf) != 0) {
        if ((*(byte *)(iVar9 + 0x2e) & 0xf) == 1) {
          iVar11 = FUN_000366e0(_DAT_00033b7c);
          if (iVar11 != 0) {
            FUN_0002f9bc(_DAT_00033b7c);
            FUN_0002f9fc(6,s___MM__TRACEABILITY_PROPERTIES_ma_00033cb9 + 3);
          }
          pbVar18 = (byte *)(*(int *)(param_2 + 0xc) + 0x36);
          FUN_0002bc28((int)((uint)*pbVar18 << 0x1a) < 0);
          FUN_0002bd68((int)((uint)*pbVar18 << 0x1b) < 0);
          FUN_001f2624(*(undefined4 *)(*param_1 + 4));
          piVar17 = (int *)((uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff);
          uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
          FUN_00036100(param_1,uVar4,iVar9 + 0x14,piVar17);
          param_1 = _DAT_00033b7c;
          iVar7 = FUN_000366e0(_DAT_00033b7c);
          bVar22 = iVar7 == 0;
          goto LAB_00033a4e;
        }
        local_44 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x34));
        local_44 = local_44 & 0xffff;
        cVar20 = *(char *)(iVar7 + 0xc);
        cVar24 = *(char *)(iVar7 + 0xd);
        uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
        FUN_00035a48(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24,DAT_00033c70,local_44,0);
        iVar7 = FUN_000366e0(piVar17);
        bVar23 = iVar7 == 0;
        goto LAB_0003395c;
      }
      iVar11 = FUN_000366e0(_DAT_00033b7c);
      if (iVar11 != 0) {
        FUN_0002f9bc(piVar16);
        FUN_0002f9fc(6,s___MM__TRACEABILITY_PROPERTIES_ma_00033c76 + 2);
      }
      uVar12 = (uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff;
      uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
      FUN_00036100(param_1,uVar4,iVar9 + 0x14,uVar12);
      iVar7 = FUN_000366e0(piVar16);
      bVar23 = true;
      if (iVar7 != 0) {
        uVar10 = FUN_0002f9bc(piVar16);
        pcVar15 = _DAT_00033cb8;
        goto LAB_000301f4;
      }
    }
    else {
      iVar7 = FUN_000366e0(piVar17);
      bVar23 = iVar7 == 0;
      piVar16 = piVar17;
    }
    if (bVar23) goto LAB_0002fc58;
    uVar13 = FUN_0002f9bc(piVar16);
    uVar10 = DAT_00033c6c;
    goto LAB_00031fb0;
  case 5:
    iVar7 = FUN_000366e0(_DAT_00033b7c);
    if (iVar7 != 0) {
      FUN_0002f9bc(_DAT_00033b7c);
      FUN_0002f9fc(6,s_MM__TIMESCALE_PROPERTIES_managem_00033cfc);
    }
    piVar16 = _DAT_00033b7c;
    iVar9 = *(int *)(param_2 + 0xc);
    iVar7 = iVar9 + 0x20;
    uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar9 + 0x2a),*(undefined1 *)(iVar9 + 0x2b));
    if ((uVar12 == *(ushort *)(*param_1 + 2)) || (uVar12 == DAT_00033c68)) {
      if ((*(byte *)(iVar9 + 0x2e) & 0xf) == 0) {
        iVar11 = FUN_000366e0(_DAT_00033b7c);
        if (iVar11 != 0) {
          FUN_0002f9bc(piVar16);
          FUN_0002f9fc(6,s___MM__TIMESCALE_PROPERTIES_manag_00033d39 + 3);
        }
        uVar12 = (uint)*(byte *)(iVar7 + 0xc) - (uint)*(byte *)(iVar7 + 0xd) & 0xff;
        uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
        FUN_00035fe4(param_1,uVar4,iVar9 + 0x14,uVar12);
        iVar7 = FUN_000366e0(piVar16);
        bVar23 = iVar7 == 0;
        piVar17 = piVar16;
        if (!bVar23) {
          uVar10 = FUN_0002f9bc(piVar16);
          pcVar15 = DAT_00034178;
          goto LAB_000301f4;
        }
        goto LAB_00033ab2;
      }
      if ((*(byte *)(iVar9 + 0x2e) & 0xf) == 1) {
        iVar11 = FUN_000366e0(_DAT_0003417c);
        if (iVar11 != 0) {
          FUN_0002f9bc(_DAT_0003417c);
          FUN_0002f9fc(6,s__MM__TIMESCALE_PROPERTIES_manage_0003417f + 1);
        }
        iVar11 = *(int *)(param_2 + 0xc);
        FUN_0002bcc0((int)((uint)*(byte *)(iVar11 + 0x36) << 0x1c) < 0);
        FUN_0002bd5c(*(undefined1 *)(iVar11 + 0x37));
        FUN_001f2624(*(undefined4 *)(*param_1 + 4));
        cVar20 = *(char *)(iVar7 + 0xc);
        cVar24 = *(char *)(iVar7 + 0xd);
        uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
        FUN_00035fe4(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24);
        uVar10 = _DAT_0003417c;
        iVar7 = FUN_000366e0(_DAT_0003417c);
        if (iVar7 == 0) goto LAB_0002fc58;
        uVar10 = FUN_0002f9bc(uVar10);
        pcVar15 = DAT_00034178;
        goto LAB_000301f4;
      }
      local_44 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x34));
      local_44 = local_44 & 0xffff;
      cVar20 = *(char *)(iVar7 + 0xc);
      cVar24 = *(char *)(iVar7 + 0xd);
      uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar9 + 0x1e));
      FUN_00035a48(param_1,uVar4,iVar9 + 0x14,cVar20 - cVar24,DAT_00033c70,local_44,0);
      iVar7 = FUN_000366e0(piVar17);
      bVar22 = true;
      if (iVar7 != 0) {
        uVar13 = FUN_0002f9bc(piVar17);
        uVar10 = _DAT_00033d38;
        goto LAB_00031fb0;
      }
    }
    else {
      iVar7 = FUN_000366e0(piVar17);
      bVar23 = iVar7 == 0;
LAB_00033ab2:
      bVar22 = true;
      if (!bVar23) {
        uVar13 = FUN_0002f9bc(piVar17);
        uVar10 = DAT_00033d34;
        goto LAB_00031fb0;
      }
    }
LAB_00033a4e:
    bVar23 = true;
    if (!bVar22) {
      uVar10 = FUN_0002f9bc(param_1);
      pcVar15 = _DAT_00033cb8;
      goto LAB_000301f4;
    }
LAB_0003395c:
    if (!bVar23) {
      uVar13 = FUN_0002f9bc(piVar17);
      uVar10 = _DAT_00033c74;
      goto LAB_00031fb0;
    }
    goto LAB_0002fc58;
  case 6:
    iVar7 = FUN_000366e0(_DAT_0003417c);
    if (iVar7 != 0) {
      FUN_0002f9bc(uVar10);
      FUN_0002f9fc(6,s_MM__UNICAST_NEGOTIATION_ENABLE_m_000341bc);
    }
    iVar7 = *(int *)(param_2 + 0xc);
    uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x34));
    cVar20 = *(char *)(iVar7 + 0x2c);
    cVar24 = *(char *)(iVar7 + 0x2d);
    uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
    FUN_00035a48(param_1,uVar5,iVar7 + 0x14,cVar20 - cVar24,6,uVar4,0);
    iVar7 = FUN_000366e0(piVar17);
    bVar22 = iVar7 == 0;
    goto LAB_00033e78;
  case 7:
    iVar7 = FUN_000366e0(_DAT_0003417c);
    if (iVar7 != 0) {
      FUN_0002f9bc(uVar10);
      FUN_0002f9fc(6,s___MM__PATH_TRACE_LIST_management_000341f9 + 3);
    }
    iVar7 = *(int *)(param_2 + 0xc);
    uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x34));
    cVar20 = *(char *)(iVar7 + 0x2c);
    cVar24 = *(char *)(iVar7 + 0x2d);
    uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
    FUN_00035a48(param_1,uVar5,iVar7 + 0x14,cVar20 - cVar24,6,uVar4,0);
    iVar7 = FUN_000366e0(piVar17);
    bVar23 = iVar7 == 0;
    goto LAB_00033eec;
  case 8:
    iVar7 = FUN_000366e0(_DAT_0003417c);
    if (iVar7 != 0) {
      FUN_0002f9bc(uVar10);
      FUN_0002f9fc(6,s___MM__PATH_TRACE_ENABLE_manageme_00034232 + 2);
    }
    iVar7 = *(int *)(param_2 + 0xc);
    uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x34));
    cVar20 = *(char *)(iVar7 + 0x2c);
    cVar24 = *(char *)(iVar7 + 0x2d);
    uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
    FUN_00035a48(param_1,uVar5,iVar7 + 0x14,cVar20 - cVar24,6,uVar4,0);
    iVar7 = FUN_000366e0(piVar17);
    bVar23 = iVar7 == 0;
    goto LAB_00033f60;
  case 9:
    iVar7 = FUN_000366e0(_DAT_0003417c);
    if (iVar7 != 0) {
      FUN_0002f9bc(uVar10);
      FUN_0002f9fc(6,s___MM__MASTER_CLUSTER_TABLE_manag_0003426a + 2);
    }
    iVar7 = *(int *)(param_2 + 0xc);
    uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x34));
    cVar20 = *(char *)(iVar7 + 0x2c);
    cVar24 = *(char *)(iVar7 + 0x2d);
    uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
    FUN_00035a48(param_1,uVar5,iVar7 + 0x14,cVar20 - cVar24,6,uVar4,0);
    iVar7 = FUN_000366e0(piVar17);
    bVar23 = iVar7 == 0;
    if (!bVar23) {
      uVar13 = FUN_0002f9bc(piVar17);
      uVar10 = _DAT_000342a4;
      goto LAB_00031fb0;
    }
LAB_00033eec:
    if (!bVar23) {
      uVar13 = FUN_0002f9bc(piVar17);
      uVar10 = _DAT_00034230;
LAB_00031fb0:
      FUN_00031c64(uVar13,uVar10);
      return;
    }
    goto LAB_0002fc58;
  case 10:
    iVar7 = FUN_000366e0(_DAT_0003417c);
    if (iVar7 != 0) {
      FUN_0002f9bc(uVar10);
      FUN_0002f9fc(6,s___MM__UNICAST_MASTER_TABLE_manag_000342a6 + 2);
    }
    iVar7 = *(int *)(param_2 + 0xc);
    uVar4 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x34));
    cVar20 = *(char *)(iVar7 + 0x2c);
    cVar24 = *(char *)(iVar7 + 0x2d);
    uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
    FUN_00035a48(param_1,uVar5,iVar7 + 0x14,cVar20 - cVar24,6,uVar4,0);
    iVar7 = FUN_000366e0(piVar17);
    bVar23 = iVar7 == 0;
LAB_00034048:
    if (!bVar23) {
      uVar13 = FUN_0002f9bc(piVar17);
      uVar10 = _DAT_000342e0;
      goto LAB_00031fb0;
    }
LAB_00033f60:
    bVar22 = true;
    if (!bVar23) {
      uVar13 = FUN_0002f9bc(piVar17);
      uVar10 = _DAT_00034268;
      goto LAB_00031fb0;
    }
LAB_00033e78:
    if (!bVar22) {
      uVar13 = FUN_0002f9bc(piVar17);
      uVar10 = _DAT_000341f8;
      goto LAB_00031fb0;
    }
    goto LAB_0002fc58;
  }
  if (!bVar23) {
    uVar10 = FUN_0002f9bc(param_1);
    pcVar15 = s_MM__TIME_response_management_mes_0003360c;
LAB_000301f4:
    FUN_0002fdfe(uVar10,pcVar15);
    return;
  }
LAB_0002fc58:
  FUN_000365f4(param_2);
  return;
}

