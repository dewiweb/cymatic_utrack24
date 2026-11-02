// rea decompile_all
// name: FUN_00185be0
// address: 0x185be0
// body: available
// range: 0x185be0-0x185e8f inclusive
// range: 0x185e92-0x1861e3 inclusive
// range: 0x186226-0x18622b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00185be0(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  uint local_58;
  int local_54;
  int local_4c;
  uint local_44;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  
  local_18 = param_1;
  uVar2 = FUN_001a4490(0);
  local_3c = local_18 + 0x80;
  for (piVar8 = *(int **)(local_18 + 0x8c); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[7]) {
    if (((0 < *piVar8) &&
        (((piVar8[1] == 0 || (*(int *)(piVar8[1] + 4) == 0)) && (iVar6 = piVar8[3], iVar6 != 0))))
       && ((((cVar1 = *(char *)(iVar6 + 0x2c), cVar1 == '\x04' || (cVar1 == '\x0e')) ||
            (cVar1 == '\x03')) || (cVar1 == '\r')))) {
      uVar3 = uVar2 - *(int *)(iVar6 + 0x30);
      if (((uVar3 < 0x78) && (*(int *)(iVar6 + 0x20) != 0)) &&
         ((*(int *)(iVar6 + 0x24) != 0 &&
          ((iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 0xc), iVar5 == 0x191 || (iVar5 == 0x197))))))
      {
        iVar6 = piVar8[4];
joined_r0x00185c8c:
        if (iVar6 < 3) {
          FUN_001721b4(local_18,piVar8,0);
          piVar8[4] = piVar8[4] + 1;
        }
      }
      else if ((cVar1 == '\x04') || (((cVar1 == '\x0e' || (cVar1 == '\x03')) || (cVar1 == '\r')))) {
        if (((uVar3 < 0x78) && (*(int *)(iVar6 + 0x20) != 0)) &&
           ((*(int *)(iVar6 + 0x24) != 0 && (*(int *)(*(int *)(iVar6 + 0x24) + 0xc) == 0x1a6)))) {
          iVar6 = piVar8[4];
          goto joined_r0x00185c8c;
        }
        if ((((cVar1 == '\x04') || (cVar1 == '\x0e')) || ((cVar1 == '\x03' || (cVar1 == '\r')))) &&
           ((((uVar3 < 0x78 && (*(int *)(iVar6 + 0x20) != 0)) && (*(int *)(iVar6 + 0x24) != 0)) &&
            (*(int *)(*(int *)(iVar6 + 0x24) + 0xc) - 300U < 100)))) {
          FUN_001721b4(local_18,piVar8,0);
        }
      }
    }
    for (puVar7 = (undefined4 *)piVar8[1]; puVar7 != (undefined4 *)0x0;
        puVar7 = (undefined4 *)puVar7[0xe]) {
      if (puVar7[1] != 0) {
        iVar6 = FUN_001a4bdc(puVar7[0xb],0);
        if (((iVar6 != 0) || (iVar6 = piVar8[3], iVar6 != 0)) &&
           (((cVar1 = *(char *)(iVar6 + 0x2c), cVar1 == '\x04' ||
             ((cVar1 == '\x0e' || (cVar1 == '\x03')))) || (cVar1 == '\r')))) {
          uVar3 = uVar2 - *(int *)(iVar6 + 0x30);
          if ((((uVar3 < 0x78) && (*(int *)(iVar6 + 0x20) != 0)) && (*(int *)(iVar6 + 0x24) != 0))
             && ((iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 0xc), iVar5 == 0x191 || (iVar5 == 0x197)
                 ))) {
            iVar6 = puVar7[0xc];
joined_r0x00185d62:
            if (iVar6 < 3) {
              FUN_001721b4(local_18,piVar8,puVar7);
              puVar7[0xc] = puVar7[0xc] + 1;
            }
            goto LAB_00185ec0;
          }
          if (((cVar1 == '\x04') || (cVar1 == '\x0e')) || ((cVar1 == '\x03' || (cVar1 == '\r')))) {
            if ((((uVar3 < 0x78) && (*(int *)(iVar6 + 0x20) != 0)) && (*(int *)(iVar6 + 0x24) != 0))
               && (*(int *)(*(int *)(iVar6 + 0x24) + 0xc) == 0x1a6)) {
              iVar6 = puVar7[0xc];
              goto joined_r0x00185d62;
            }
            if ((((cVar1 == '\x04') || (cVar1 == '\x0e')) || ((cVar1 == '\x03' || (cVar1 == '\r'))))
               && ((((uVar3 < 0x78 && (*(int *)(iVar6 + 0x20) != 0)) &&
                    (*(int *)(iVar6 + 0x24) != 0)) &&
                   (*(int *)(*(int *)(iVar6 + 0x24) + 0xc) - 300U < 100)))) {
              FUN_001721b4(local_18,piVar8,puVar7);
              goto LAB_00185ec0;
            }
          }
        }
        iVar6 = puVar7[4];
        if (iVar6 != -1) {
          if (iVar6 == 0) {
            uVar4 = puVar7[2];
            uVar3 = uVar4 + puVar7[3];
            if (uVar3 < uVar4) {
              if (uVar3 < uVar2) goto joined_r0x00185dcc;
            }
            else {
              if (uVar3 < uVar2) goto LAB_00185ec0;
joined_r0x00185dcc:
              if (uVar2 < uVar4) goto LAB_00185ec0;
            }
            if (uVar3 - uVar2 < (uint)((int)puVar7[3] / 2)) {
              local_58 = 0;
              if (puVar7[5] == 1) {
                FUN_001865f8(local_18,*puVar7,&local_58);
                if (local_58 != 0) {
                  local_38 = 0;
                  local_34 = 0;
                  local_30 = 0;
                  local_2c = 0;
                  local_28 = 0;
                  local_24 = 0;
                  local_20 = 0;
                  local_1c = 0;
                  FUN_000027f4(&local_38,0x1f,s__i_refresher_uac_001861ec,puVar7[3]);
                  FUN_001a6054(local_58,s_Session_Expires_00186200,&local_38);
                  FUN_001a6054(local_58,s_Supported_00186218,s_timer_00186210);
                  iVar6 = FUN_00186b40(local_18,*puVar7,local_58);
                  goto joined_r0x00185e80;
                }
              }
              else {
                FUN_00186524(local_18,*puVar7,s_INVITE_001861e4,&local_58);
                if (local_58 != 0) {
                  local_38 = 0;
                  local_34 = 0;
                  local_30 = 0;
                  local_2c = 0;
                  local_28 = 0;
                  local_24 = 0;
                  local_20 = 0;
                  local_1c = 0;
                  FUN_000027f4(&local_38,0x1f,s__i_refresher_uac_001861ec,puVar7[3]);
                  FUN_001a6054(local_58,s_Session_Expires_00186200,&local_38);
                  FUN_001a6054(local_58,s_Supported_00186218,s_timer_00186210);
                  iVar6 = FUN_00186b40(local_18,*puVar7,local_58);
joined_r0x00185e80:
                  if (iVar6 == 0) {
                    iVar6 = FUN_001a4490(0);
                    puVar7[2] = iVar6 + puVar7[3];
                  }
                }
              }
            }
          }
          else if (iVar6 == 1) {
            uVar3 = puVar7[2];
            uVar4 = uVar3 + puVar7[3];
            if (uVar4 < uVar3) {
              if (uVar4 < uVar2) goto joined_r0x00185eac;
            }
            else {
              if (uVar2 <= uVar4) {
joined_r0x00185eac:
                if (uVar3 <= uVar2) goto LAB_00185ec0;
              }
              puVar7[4] = 0;
              local_58 = 0;
              FUN_00178792(local_18,0x2e,piVar8,puVar7);
            }
          }
        }
      }
LAB_00185ec0:
    }
  }
  for (piVar8 = *(int **)(local_3c + 0x10); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[8]) {
    if ((((((((0 < *piVar8) && (piVar8[4] == 0)) && (iVar6 = piVar8[7], iVar6 != 0)) &&
           ((*(char *)(iVar6 + 0x2c) == '\x0e' || (*(char *)(iVar6 + 0x2c) == '\r')))) &&
          (uVar2 - *(int *)(iVar6 + 0x30) < 0x78)) &&
         ((*(int *)(iVar6 + 0x20) != 0 && (*(int *)(iVar6 + 0x24) != 0)))) &&
        ((iVar6 = *(int *)(*(int *)(iVar6 + 0x24) + 0xc), iVar6 == 0x191 ||
         ((iVar6 == 0x197 || (iVar6 == 0x1a7)))))) && (piVar8[5] < 3)) {
      FUN_001795e8(local_18,piVar8,0);
      piVar8[5] = piVar8[5] + 1;
    }
    for (piVar9 = (int *)piVar8[4]; piVar9 != (int *)0x0; piVar9 = (int *)piVar9[0xe]) {
      if ((piVar9[1] != 0) && (0 < *piVar9)) {
        iVar6 = FUN_001a4bdc(piVar9[0xb],0);
        if ((((iVar6 == 0) && (iVar6 = piVar8[7], iVar6 == 0)) ||
            (((*(char *)(iVar6 + 0x2c) != '\x0e' && (*(char *)(iVar6 + 0x2c) != '\r')) ||
             (0x77 < uVar2 - *(int *)(iVar6 + 0x30))))) ||
           (((*(int *)(iVar6 + 0x20) == 0 || (*(int *)(iVar6 + 0x24) == 0)) ||
            ((iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 0xc), iVar5 != 0x191 && (iVar5 != 0x197)))))
           ) {
          local_4c = piVar8[3];
          if ((((local_4c != 0) && (iVar6 != 0)) &&
              ((cVar1 = *(char *)(iVar6 + 0x2c), cVar1 == '\x0e' || (cVar1 == '\r')))) &&
             ((((*(int *)(iVar6 + 0x20) == 0 || (*(int *)(iVar6 + 0x24) == 0)) ||
               (*(int *)(*(int *)(iVar6 + 0x24) + 0xc) < 300)) &&
              ((cVar1 == '\x0e' || (cVar1 == '\r')))))) {
            FUN_0016da64(local_4c);
            uVar3 = uVar2 - *(int *)(iVar6 + 0x30);
            if (((uint)(local_4c - extraout_r1) < uVar3) || (local_4c - 6U < uVar3)) {
              FUN_001793e0(local_18,piVar8,piVar9,iVar6);
            }
          }
        }
        else if (piVar9[0xc] < 3) {
          FUN_001795e8(local_18,piVar8,piVar9,iVar6);
          piVar9[0xc] = piVar9[0xc] + 1;
        }
      }
    }
  }
  for (iVar6 = *(int *)(local_3c + 0x14); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x20)) {
    for (piVar8 = *(int **)(iVar6 + 0x14); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[0xe]) {
      if (((((piVar8[1] != 0) && (0 < *piVar8)) &&
           ((iVar5 = FUN_001a4bdc(piVar8[0xb],0), iVar5 != 0 &&
            ((((*(char *)(iVar5 + 0x2c) == '\x0e' || (*(char *)(iVar5 + 0x2c) == '\r')) &&
              (uVar2 - *(int *)(iVar5 + 0x30) < 0x78)) &&
             ((*(int *)(iVar5 + 0x20) != 0 && (*(int *)(iVar5 + 0x24) != 0)))))))) &&
          ((iVar5 = *(int *)(*(int *)(iVar5 + 0x24) + 0xc), iVar5 == 0x191 || (iVar5 == 0x197)))) &&
         (piVar8[0xc] < 3)) {
        FUN_001759b8(local_18,iVar6,piVar8);
        piVar8[0xc] = piVar8[0xc] + 1;
      }
    }
  }
  for (piVar8 = *(int **)(local_3c + 8); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[0x15]) {
    iVar6 = *piVar8;
    if ((0 < iVar6) && (iVar5 = piVar8[0xe], iVar5 != 0)) {
      local_54 = piVar8[1];
      if (local_54 == 0) {
LAB_001860e8:
        if ((((uVar2 - *(int *)(iVar5 + 0x30) < 0x78) && (*(int *)(iVar5 + 0x20) != 0)) &&
            (*(int *)(iVar5 + 0x24) != 0)) &&
           ((((iVar5 = *(int *)(*(int *)(iVar5 + 0x24) + 0xc), iVar5 == 0x191 || (iVar5 == 0x197))
             || (iVar5 == 0x1a7)) && (piVar8[0xf] < 3)))) {
          FUN_001878d4(local_18,iVar6,0);
          piVar8[0xf] = piVar8[0xf] + 1;
        }
      }
      else {
        local_58 = uVar2 - *(int *)(iVar5 + 0x30);
        if (((local_58 < 0x385) &&
            (FUN_0016da64(local_54), local_58 <= (uint)(local_54 - extraout_r1_00))) &&
           (local_58 <= local_54 - 6U)) {
          if (local_58 < 0x79) goto LAB_001860e8;
          if ((*(int *)(iVar5 + 0x24) != 0) && (*(int *)(*(int *)(iVar5 + 0x24) + 0xc) - 200U < 100)
             ) goto LAB_00186124;
        }
        FUN_001878d4(local_18,iVar6,0);
      }
    }
LAB_00186124:
  }
  piVar8 = *(int **)(local_3c + 0x18);
  do {
    if (piVar8 == (int *)0x0) {
      return;
    }
    if ((0 < *piVar8) && (iVar6 = piVar8[0x52], iVar6 != 0)) {
      local_4c = piVar8[1];
      if (local_4c == 0) {
LAB_0018617e:
        if (((uVar2 - *(int *)(iVar6 + 0x30) < 0x78) && (*(int *)(iVar6 + 0x20) != 0)) &&
           (*(int *)(iVar6 + 0x24) != 0)) {
          iVar6 = *(int *)(*(int *)(iVar6 + 0x24) + 0xc);
          if ((iVar6 == 0x191) || (iVar6 == 0x197)) {
            if (piVar8[0x53] < 3) {
              FUN_001789a8(local_18,0,piVar8 + 0x52);
              piVar8[0x53] = piVar8[0x53] + 1;
            }
          }
          else if ((iVar6 == 0x19c) || (iVar6 == 0x1a7)) goto LAB_001861ca;
        }
      }
      else {
        local_44 = uVar2 - *(int *)(iVar6 + 0x30);
        if ((local_44 < 0x385) &&
           (FUN_0016da64(local_4c), local_44 <= (uint)(local_4c - extraout_r1_01))) {
          if (local_44 < 0x79) goto LAB_0018617e;
          if ((*(int *)(iVar6 + 0x24) != 0) && (*(int *)(*(int *)(iVar6 + 0x24) + 0xc) - 200U < 100)
             ) goto LAB_001861da;
        }
LAB_001861ca:
        FUN_00177334(local_18,0,piVar8 + 0x52);
      }
    }
LAB_001861da:
    piVar8 = (int *)piVar8[0x54];
  } while( true );
}

