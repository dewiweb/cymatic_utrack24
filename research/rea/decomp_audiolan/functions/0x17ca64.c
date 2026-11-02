// rea decompile_all
// name: FUN_0017ca64
// address: 0x17ca64
// body: available
// range: 0x17ca64-0x17ce7b inclusive
// range: 0x17cea0-0x17d2c7 inclusive
// range: 0x17d2fc-0x17d641 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

int FUN_0017ca64(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  code *pcVar8;
  char *pcVar9;
  undefined *puVar10;
  int iVar11;
  undefined *puVar12;
  int aiStack_524 [2];
  int *local_51c;
  int local_518 [2];
  int local_510 [4];
  int *local_500;
  int *local_4fc;
  int iStack_4f0;
  int *local_4ec;
  int aiStack_4e8 [11];
  int *local_4bc;
  int *local_48c;
  int local_458;
  int local_428;
  int local_3f8;
  int local_3c8;
  int *local_39c;
  int *local_36c;
  int *local_33c;
  int *local_30c;
  int *local_2dc;
  int local_2a8;
  int local_27c;
  int local_278;
  int *local_24c;
  int *local_21c;
  int *local_1ec;
  int *local_1bc;
  int *local_18c;
  int *local_15c;
  int *local_12c;
  int *local_fc;
  int *local_cc;
  int *local_9c;
  int local_64;
  int local_60;
  int local_5c;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int *local_38;
  code *local_34;
  int *local_30;
  code *local_2c;
  int *local_28;
  int *local_24;
  int *piStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_50 = 0;
  local_518[1] = 0;
  *param_2 = 0;
  puVar12 = &DAT_00001f40;
  iVar11 = -2;
  if (param_1 == (int *)0x0) {
    return -2;
  }
  local_51c = param_1 + 0x30;
  local_24 = param_1;
  piStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  if (param_1[0x34] == 1) {
    if ((code *)*DAT_0017ce80 == entry) {
      iVar11 = FUN_0019b388(param_1[0x36] + 1);
    }
    else {
      iVar11 = (*(code *)*DAT_0017ce80)(param_1[0x36] + 1);
    }
    *param_2 = iVar11;
    if (iVar11 != 0) {
      FUN_00003628(iVar11,local_51c[5],local_51c[6]);
      *(undefined1 *)(*param_2 + local_51c[6]) = 0;
      if (*(int *)((int)&local_51c + DAT_0017ce84) == 0) {
        return 0;
      }
      **(int **)((int)&local_51c + DAT_0017ce84) = local_51c[6];
      return 0;
    }
    return -4;
  }
  if (param_1[0x35] != 0) {
    if ((code *)*DAT_0017ce7c == entry) {
      FUN_0018a280();
    }
    else {
      (*(code *)*DAT_0017ce7c)();
    }
  }
  local_51c[5] = 0;
  if ((code *)*DAT_0017ce80 == entry) {
    iVar1 = FUN_0019b388(&DAT_00001f40);
  }
  else {
    iVar1 = (*(code *)*DAT_0017ce80)(&DAT_00001f40);
  }
  if (iVar1 == 0) {
    return -4;
  }
  *param_2 = iVar1;
  if (local_24[2] == 0) {
    if (local_24[3] != 0) {
      local_4fc = local_24;
      local_60 = 0;
      if (((local_24[4] != 0) && (99 < local_24[3])) && (local_24[3] <= DAT_0017ce8c)) {
        local_510[2] = *local_24;
        if (local_510[2] == 0) {
          local_510[2] = *DAT_0017ce88;
        }
        FUN_000028d8(local_510 + 3,&DAT_0017ce90);
        if (*DAT_0017ce80 == 0) {
          iVar11 = FUN_000034d0(local_510[2]);
          iVar2 = FUN_000034d0(local_4fc[4]);
          local_60 = FUN_0019b388(iVar11 + iVar2 + 7);
        }
        else {
          iVar11 = FUN_000034d0(local_510[2]);
          iVar2 = FUN_000034d0(local_4fc[4]);
          local_60 = (*(code *)*DAT_0017ce80)(iVar11 + iVar2 + 7);
        }
        if (local_60 == 0) goto LAB_0017cc00;
        puVar4 = (undefined1 *)FUN_001a6eec(local_60,local_510[2]);
        *puVar4 = 0x20;
        puVar4 = (undefined1 *)FUN_001a7010(puVar4 + 1,local_510 + 3,3);
        *puVar4 = 0x20;
        FUN_00003418(puVar4 + 1,local_4fc[4]);
        goto LAB_0017ccb2;
      }
    }
LAB_0017ccd6:
    if (*(int *)((int)local_518 + DAT_0017ce84) == 0) {
      iVar1 = *param_2;
      if (iVar1 != 0) {
        pcVar8 = (code *)*DAT_0017ce7c;
joined_r0x0017ccec:
        if (pcVar8 == entry) {
          FUN_0018a280(iVar1);
        }
        else {
          (*pcVar8)(iVar1);
        }
      }
LAB_0017d1bc:
      *param_2 = 0;
      return iVar11;
    }
  }
  else {
    local_500 = local_24;
    local_60 = 0;
    if (((local_24[1] == 0) || (local_24[2] == 0)) ||
       (iVar11 = FUN_001a82fc(local_24[1],local_510 + 2), iVar11 != 0)) goto LAB_0017ccd6;
    local_510[3] = *local_500;
    if (local_510[3] == 0) {
      local_510[3] = *DAT_0017ce88;
    }
    if (*DAT_0017ce80 == 0) {
      iVar11 = FUN_000034d0(local_500[2]);
      iVar2 = FUN_000034d0(local_510[2]);
      iVar3 = FUN_000034d0(local_510[3]);
      local_60 = FUN_0019b388(iVar11 + iVar2 + iVar3 + 3);
    }
    else {
      iVar11 = FUN_000034d0(local_500[2]);
      iVar2 = FUN_000034d0(local_510[2]);
      iVar3 = FUN_000034d0(local_510[3]);
      local_60 = (*(code *)*DAT_0017ce80)(iVar11 + iVar2 + iVar3 + 3);
    }
    if (local_60 == 0) {
      if (local_510[2] != 0) {
        if ((code *)*DAT_0017ce7c == entry) {
          FUN_0018a280();
        }
        else {
          (*(code *)*DAT_0017ce7c)();
        }
      }
LAB_0017cc00:
      iVar11 = -4;
      goto LAB_0017ccd6;
    }
    puVar4 = (undefined1 *)FUN_001a6eec(local_60,local_500[2]);
    *puVar4 = 0x20;
    puVar4 = (undefined1 *)FUN_001a6eec(puVar4 + 1,local_510[2]);
    *puVar4 = 0x20;
    FUN_00003418(puVar4 + 1,local_510[3]);
    if (local_510[2] != 0) {
      if ((code *)*DAT_0017ce7c == entry) {
        FUN_0018a280();
      }
      else {
        (*(code *)*DAT_0017ce7c)();
      }
    }
LAB_0017ccb2:
    uVar5 = FUN_001a6eec(iVar1,local_60);
    if (local_60 != 0) {
      if ((code *)*DAT_0017ce7c == entry) {
        FUN_0018a280();
      }
      else {
        (*(code *)*DAT_0017ce7c)();
      }
    }
    iVar1 = FUN_001a7010(uVar5,&DAT_0017ce94,2);
  }
  FUN_000037d0(local_510,DAT_0017ce98,0x4b0);
  local_4ec = local_24 + 0x2c;
  local_4bc = local_24 + 0x27;
  local_48c = local_24 + 0x29;
  local_458 = local_24[0x1f];
  local_38 = local_24 + 0x20;
  local_428 = local_24[0x2b];
  local_3f8 = local_24[0x13];
  local_3c8 = local_24[0x1c];
  local_39c = local_24 + 0x16;
  local_36c = local_24 + 0x11;
  local_33c = local_24 + 0x2e;
  local_30c = local_24 + 0x21;
  local_2dc = local_24 + 0x25;
  local_2a8 = local_24[0x1b];
  local_278 = local_24[0x20];
  local_24c = local_24 + 0xd;
  local_21c = local_24 + 0x18;
  local_1ec = local_24 + 0x14;
  local_1bc = local_24 + 0xb;
  local_18c = local_24 + 0x1d;
  local_15c = local_24 + 5;
  local_12c = local_24 + 7;
  local_fc = local_24 + 9;
  local_cc = local_24 + 0xf;
  local_9c = local_24 + 0x23;
  local_5c = 0;
  while ((char)local_510[0] != '\0') {
    puVar10 = puVar12;
    if (local_27c == 0) {
      iVar2 = aiStack_4e8[local_5c * 0xc];
      local_30 = local_510 + local_5c * 0xc;
      local_40 = (&iStack_4f0)[local_5c * 0xc];
      local_34 = (code *)aiStack_4e8[local_5c * 0xc + 1];
      iVar11 = *param_2;
      local_518[0] = iVar11;
      if (iVar2 == 0) {
LAB_0017cf3e:
        *param_2 = local_518[0];
        local_48 = iVar1;
        puVar10 = puVar12;
      }
      else {
        puVar10 = (undefined *)((iVar1 - iVar11) + (&iStack_4f0)[local_5c * 0xc] + 100);
        if (puVar12 < puVar10) {
          if ((code *)*DAT_0017ce9c == entry) {
            local_518[0] = FUN_001ab47c(iVar11,puVar10);
          }
          else {
            local_518[0] = (*(code *)*DAT_0017ce9c)();
          }
          if (local_518[0] != 0) {
            *param_2 = local_518[0];
            iVar1 = local_518[0] + (iVar1 - iVar11);
            puVar12 = puVar10;
            goto LAB_0017ce3c;
          }
          if (*param_2 != 0) {
            pcVar8 = (code *)*DAT_0017ce7c;
            if (pcVar8 == entry) {
LAB_0017cf2a:
              FUN_0018a280();
            }
            else {
LAB_0017cf26:
              (*pcVar8)();
            }
          }
LAB_0017cea0:
          iVar1 = 0;
          *param_2 = 0;
        }
        else {
LAB_0017ce3c:
          puVar10 = puVar12;
          iVar1 = FUN_001a7010(iVar1,local_30,local_40);
          iVar11 = (*local_34)(iVar2,&local_4c);
          if (iVar11 == 0) {
            iVar11 = FUN_000034d0(local_4c);
            iVar2 = iVar1 - local_518[0];
            if (puVar10 < (undefined *)(iVar11 + iVar2 + 100)) {
              iVar11 = FUN_000034d0(local_4c);
              puVar10 = (undefined *)(iVar11 + iVar2 + 100);
              if ((code *)*DAT_0017d2c8 == entry) {
                local_518[0] = FUN_001ab47c(local_518[0],puVar10);
              }
              else {
                local_518[0] = (*(code *)*DAT_0017d2c8)(local_518[0],puVar10);
              }
              if (local_518[0] == 0) {
                if (*param_2 != 0) {
                  pcVar8 = (code *)*DAT_0017d2cc;
                  if (pcVar8 == entry) goto LAB_0017cf2a;
                  goto LAB_0017cf26;
                }
                goto LAB_0017cea0;
              }
              *param_2 = local_518[0];
              iVar1 = local_518[0] + iVar2;
            }
            uVar5 = FUN_001a6eec(iVar1,local_4c);
            if (local_4c != 0) {
              if ((code *)*DAT_0017d2cc == entry) {
                FUN_0018a280();
              }
              else {
                (*(code *)*DAT_0017d2cc)();
              }
            }
            iVar1 = FUN_001a7010(uVar5,DAT_0017d2d0,2);
            puVar12 = puVar10;
            goto LAB_0017cf3e;
          }
          *param_2 = local_518[0];
          local_48 = 0;
        }
      }
    }
    local_40 = aiStack_4e8[local_5c * 0xc + -1];
    local_28 = local_510 + local_5c * 0xc;
    local_3c = (&iStack_4f0)[local_5c * 0xc];
    local_2c = (code *)aiStack_4e8[local_5c * 0xc + 1];
    local_4c = 0;
    iVar2 = *param_2;
    while (iVar11 = FUN_001a4bc4(local_40,local_4c), iVar11 == 0) {
      local_30 = (int *)FUN_001a4bdc(local_40,local_4c);
      iVar11 = iVar1 - iVar2;
      puVar12 = (undefined *)(iVar11 + local_3c + 100);
      if (puVar10 < puVar12) {
        if ((code *)*DAT_0017d2c8 == entry) {
          iVar2 = FUN_001ab47c(iVar2);
        }
        else {
          iVar2 = (*(code *)*DAT_0017d2c8)(iVar2);
        }
        if (iVar2 != 0) {
          iVar1 = iVar2 + iVar11;
          *param_2 = iVar2;
          puVar10 = puVar12;
          goto LAB_0017cfcc;
        }
        if (*param_2 != 0) {
          pcVar8 = (code *)*DAT_0017d2cc;
joined_r0x0017d004:
          if (pcVar8 == entry) {
            FUN_0018a280();
          }
          else {
            (*pcVar8)();
          }
        }
LAB_0017d096:
        *param_2 = 0;
        iVar11 = -4;
LAB_0017d09c:
        if (iVar11 == 0) goto LAB_0017d0d4;
        if (*param_2 == 0) goto LAB_0017d1bc;
        pcVar8 = (code *)*DAT_0017d2cc;
        goto joined_r0x0017d0ac;
      }
LAB_0017cfcc:
      puVar12 = puVar10;
      FUN_001a702a(iVar1,local_28,local_3c);
      iVar11 = (*local_2c)(local_30,&local_54);
      if (iVar11 != 0) {
        *param_2 = iVar2;
        local_48 = 0;
        goto LAB_0017d09c;
      }
      aiStack_524[1] = FUN_000034d0(iVar1);
      aiStack_524[1] = aiStack_524[1] + iVar1;
      iVar11 = FUN_000034d0(local_54);
      iVar1 = aiStack_524[1] - iVar2;
      if (puVar12 < (undefined *)(iVar11 + iVar1 + 100)) {
        iVar11 = FUN_000034d0(local_54);
        puVar12 = (undefined *)(iVar11 + iVar1 + 100);
        if ((code *)*DAT_0017d2c8 == entry) {
          iVar2 = FUN_001ab47c(iVar2,puVar12);
        }
        else {
          iVar2 = (*(code *)*DAT_0017d2c8)(iVar2,puVar12);
        }
        if (iVar2 == 0) {
          if (*param_2 != 0) {
            pcVar8 = (code *)*DAT_0017d2cc;
            goto joined_r0x0017d004;
          }
          goto LAB_0017d096;
        }
        aiStack_524[1] = iVar2 + iVar1;
        *param_2 = iVar2;
      }
      uVar5 = FUN_001a6eec(aiStack_524[1],local_54);
      if (local_54 != 0) {
        if ((code *)*DAT_0017d2cc == entry) {
          FUN_0018a280();
        }
        else {
          (*(code *)*DAT_0017d2cc)();
        }
      }
      iVar1 = FUN_001a7010(uVar5,DAT_0017d2d0,2);
      local_4c = local_4c + 1;
      puVar10 = puVar12;
    }
    *param_2 = iVar2;
    local_48 = iVar1;
    puVar12 = puVar10;
LAB_0017d0d4:
    local_5c = local_5c + 1;
    iVar1 = local_48;
    local_510[0]._0_1_ = (char)local_510[local_5c * 0xc];
  }
  local_5c = 0;
  while (iVar11 = FUN_001a4bc4(local_51c,local_5c), iVar11 == 0) {
    uVar5 = FUN_001a4bdc(local_51c,local_5c);
    iVar11 = FUN_001a461c(uVar5,&local_60);
    if (iVar11 != 0) {
      iVar1 = *param_2;
      if (iVar1 == 0) goto LAB_0017d1bc;
      pcVar8 = (code *)*DAT_0017d2cc;
      goto joined_r0x0017ccec;
    }
    iVar11 = FUN_000034d0(local_60);
    iVar2 = *param_2;
    puVar10 = (undefined *)((iVar1 - iVar2) + iVar11 + 0x67);
    if (puVar12 < puVar10) {
      if ((code *)*DAT_0017d2c8 == entry) {
        iVar11 = FUN_001ab47c(*param_2);
      }
      else {
        iVar11 = (*(code *)*DAT_0017d2c8)();
      }
      *param_2 = iVar11;
      if (iVar11 == 0) {
        iVar11 = -4;
        if (local_60 != 0) {
          pcVar8 = (code *)*DAT_0017d2cc;
joined_r0x0017d0ac:
          if (pcVar8 == entry) {
            FUN_0018a280();
          }
          else {
            (*pcVar8)();
          }
        }
        goto LAB_0017d1bc;
      }
      iVar1 = iVar11 + (iVar1 - iVar2);
      puVar12 = puVar10;
    }
    uVar5 = FUN_001a6eec(iVar1,local_60);
    if (local_60 != 0) {
      if ((code *)*DAT_0017d2cc == entry) {
        FUN_0018a280();
      }
      else {
        (*(code *)*DAT_0017d2cc)();
      }
    }
    iVar1 = FUN_001a7010(uVar5,&DAT_0017d2d4,2);
    local_5c = local_5c + 1;
  }
  iVar11 = *param_2;
  puVar10 = (undefined *)((iVar1 - iVar11) + 0x74);
  if (puVar12 < puVar10) {
    if ((code *)*DAT_0017d2c8 == entry) {
      iVar2 = FUN_001ab47c(*param_2);
    }
    else {
      iVar2 = (*(code *)*DAT_0017d2c8)();
    }
    *param_2 = iVar2;
    if (iVar2 == 0) {
      return -4;
    }
    iVar1 = iVar2 + (iVar1 - iVar11);
    puVar12 = puVar10;
  }
  local_510[0] = *(int *)((int)aiStack_524 + DAT_0017d2d8) + 200;
  if ((*(int *)((int)local_518 + DAT_0017d2d8) != 0) &&
     (iVar11 = FUN_001a4bc4(local_510[0],0), iVar11 != 0)) {
    FUN_001a702a(iVar1,&DAT_0017d2d4,2);
    local_51c[4] = 1;
    iVar11 = FUN_001a6f50(*param_2);
    local_51c[5] = iVar11;
    local_51c[6] = (iVar1 + 2) - *param_2;
    if (*(int *)((int)&local_51c + DAT_0017d2d8) == 0) {
      return 0;
    }
    **(int **)((int)&local_51c + DAT_0017d2d8) = (iVar1 + 2) - *param_2;
    return 0;
  }
  FUN_001a702a(iVar1,s_Content_Length__0017d2dc,0x10);
  iVar1 = iVar1 + 0x10;
  iVar11 = FUN_001a4bc4(local_510[0],0);
  if (iVar11 == 0) {
    local_50 = iVar1;
    uVar5 = FUN_001a6eec(iVar1,s__0017d2f4);
  }
  else {
    uVar5 = FUN_001a7010(iVar1,&DAT_0017d2f0,1);
  }
  uVar5 = FUN_001a7010(uVar5,&DAT_0017d2d4,2);
  iVar1 = FUN_001a7010(uVar5,&DAT_0017d2d4,2);
  local_510[2] = iVar1 - *param_2;
  local_510[1] = iVar1;
  iVar11 = FUN_001a4bc4(local_510[0],0);
  if (iVar11 != 0) {
    local_51c[4] = 1;
    iVar11 = FUN_001a6f50(*param_2);
    local_51c[5] = iVar11;
    local_51c[6] = local_510[2];
    if (*(int *)((int)&local_51c + DAT_0017d2d8) == 0) {
      return 0;
    }
    **(int **)((int)&local_51c + DAT_0017d644) = local_510[2];
    return 0;
  }
  if (((((*local_38 == 0) || ((int *)local_24[0x1b] == (int *)0x0)) ||
       (iVar11 = *(int *)local_24[0x1b], iVar11 == 0)) ||
      ((piVar6 = (int *)FUN_001a6f04(iVar11,s_multipart_0017d648), piVar6 != (int *)0x0 ||
       (local_500 = piVar6, iVar11 = FUN_001a7c44(local_24[0x1b] + 8,s_boundary_0017d654,&local_500)
       , iVar11 < 0)))) || ((local_500 == (int *)0x0 || (local_500[1] == 0)))) {
LAB_0017d3ee:
    iVar11 = 0;
    while (iVar2 = FUN_001a4bc4(local_510[0],iVar11), iVar2 == 0) {
      local_518[0] = FUN_001a4bdc(local_510[0],iVar11);
      if (local_518[1] != 0) {
        uVar5 = FUN_001a6eec(iVar1,local_518[1]);
        iVar1 = FUN_001a7010(uVar5,&DAT_0017d668,2);
      }
      local_518[0] = FUN_001a29f4(local_518[0],&local_60);
      iVar2 = *param_2;
      if (local_518[0] != 0) {
        if (iVar2 != 0) {
          if ((code *)*DAT_0017d660 == entry) {
            FUN_0018a280();
          }
          else {
            (*(code *)*DAT_0017d660)();
          }
        }
        *param_2 = 0;
        if (local_518[1] != 0) {
          if ((code *)*DAT_0017d660 == entry) {
            FUN_0018a280(local_518[1]);
          }
          else {
            (*(code *)*DAT_0017d660)();
          }
        }
        return local_518[0];
      }
      piVar6 = (int *)(iVar1 - iVar2);
      puVar10 = (undefined *)((int)piVar6 + local_64 + 100);
      if (puVar12 < puVar10) {
        iVar3 = 0;
        local_510[1] = local_510[1] - iVar2;
        if (local_50 != 0) {
          iVar3 = local_50 - iVar2;
        }
        local_500 = piVar6;
        if ((code *)*DAT_0017d670 == entry) {
          iVar1 = FUN_001ab47c(*param_2);
        }
        else {
          iVar1 = (*(code *)*DAT_0017d670)();
        }
        *param_2 = iVar1;
        if (iVar1 == 0) {
          if (local_60 != 0) {
            if ((code *)*DAT_0017d660 == entry) {
              FUN_0018a280();
            }
            else {
              (*(code *)*DAT_0017d660)();
            }
          }
          if (local_518[1] == 0) {
            return -4;
          }
          if ((code *)*DAT_0017d660 != entry) {
            (*(code *)*DAT_0017d660)();
            return -4;
          }
          FUN_0018a280(local_518[1]);
          return -4;
        }
        local_510[1] = iVar1 + local_510[1];
        if (local_50 != 0) {
          local_50 = iVar1 + iVar3;
        }
        iVar1 = iVar1 + (int)local_500;
        puVar12 = puVar10;
      }
      FUN_00003628(iVar1,local_60,local_64);
      *(undefined1 *)(iVar1 + local_64) = 0;
      if (local_60 != 0) {
        if ((code *)*DAT_0017d660 == entry) {
          FUN_0018a280();
        }
        else {
          (*(code *)*DAT_0017d660)();
        }
      }
      iVar1 = iVar1 + local_64;
      iVar11 = iVar11 + 1;
    }
    if (local_518[1] != 0) {
      uVar5 = FUN_001a6eec(iVar1,local_518[1]);
      uVar5 = FUN_001a7010(uVar5,&DAT_0017d66c,2);
      iVar1 = FUN_001a7010(uVar5,&DAT_0017d668,2);
      if ((code *)*DAT_0017d660 == entry) {
        FUN_0018a280(local_518[1]);
      }
      else {
        (*(code *)*DAT_0017d660)();
      }
    }
    if (local_50 != 0) {
      piVar6 = local_510 + 3;
      iVar1 = local_510[2] + (iVar1 - local_510[1]);
      FUN_00002904(piVar6,0xf,&DAT_0017d674);
      uVar5 = FUN_000034d0(piVar6);
      iVar11 = FUN_000034d0(piVar6);
      FUN_000038f4((local_50 - iVar11) + 5,piVar6,uVar5);
      local_51c[4] = 1;
      if ((code *)*DAT_0017d664 == entry) {
        iVar11 = FUN_0019b388(iVar1 + 1);
      }
      else {
        iVar11 = (*(code *)*DAT_0017d664)(iVar1 + 1);
      }
      local_51c[5] = iVar11;
      if (iVar11 != 0) {
        FUN_00003628(iVar11,*param_2,iVar1);
        *(undefined1 *)(local_51c[5] + iVar1) = 0;
        local_51c[6] = iVar1;
        if (*(int *)((int)&local_51c + DAT_0017d644) != 0) {
          **(int **)((int)&local_51c + DAT_0017d644) = iVar1;
        }
      }
      return 0;
    }
    if (*param_2 == 0) goto LAB_0017d5f6;
    pcVar8 = (code *)*DAT_0017d660;
    local_50 = 0;
  }
  else {
    uVar7 = FUN_000034d0();
    if (uVar7 < 0x47) {
      if ((code *)*DAT_0017d664 == entry) {
        local_518[1] = FUN_0019b388(uVar7 + 5);
      }
      else {
        local_518[1] = (*(code *)*DAT_0017d664)(uVar7 + 5);
      }
      if (local_518[1] == 0) {
        if (*param_2 != 0) {
          if ((code *)*DAT_0017d660 == entry) {
            FUN_0018a280();
          }
          else {
            (*(code *)*DAT_0017d660)();
          }
        }
        *param_2 = 0;
        return -4;
      }
      FUN_001a702a(local_518[1],&DAT_0017d668,2);
      FUN_001a702a(local_518[1] + 2,&DAT_0017d66c,2);
      pcVar9 = (char *)local_500[1];
      if ((*pcVar9 == '\"') && (pcVar9[uVar7 - 1] == '\"')) {
        FUN_001a702a(local_518[1] + 4,pcVar9 + 1,uVar7 - 2);
      }
      else {
        FUN_001a702a(local_518[1] + 4,pcVar9,uVar7);
      }
      goto LAB_0017d3ee;
    }
    if (*param_2 == 0) goto LAB_0017d5f6;
    pcVar8 = (code *)*DAT_0017d660;
  }
  if (pcVar8 == entry) {
    FUN_0018a280();
  }
  else {
    (*pcVar8)();
  }
LAB_0017d5f6:
  *param_2 = 0;
  return -5;
}

