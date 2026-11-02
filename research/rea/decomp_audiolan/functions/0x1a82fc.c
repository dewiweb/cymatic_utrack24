// rea decompile_all
// name: FUN_001a82fc
// address: 0x1a82fc
// body: available
// range: 0x1a82fc-0x1a86f7 inclusive
// range: 0x1a8730-0x1a87d5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_001a82fc(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  code *pcVar10;
  char *pcVar11;
  undefined *puVar12;
  int local_2c;
  int local_28;
  int local_24;
  
  *param_2 = 0;
  piVar1 = DAT_001a86f8;
  if (param_1 == (undefined4 *)0x0) {
    return 0xfffffffe;
  }
  if ((param_1[3] == 0) && (param_1[9] == 0)) {
    return 0xfffffffe;
  }
  puVar12 = (undefined *)*param_1;
  if (puVar12 == (undefined *)0x0) {
    if (param_1[9] != 0) {
      return 0xfffffffe;
    }
LAB_001a8358:
    puVar12 = &DAT_001a86fc;
  }
  else {
    if ((param_1[9] == 0) && (puVar12 == (undefined *)0x0)) goto LAB_001a8358;
    if (param_1[9] != 0) {
      if (*DAT_001a86f8 == 0) {
        iVar2 = FUN_000034d0(puVar12);
        iVar3 = FUN_000034d0(param_1[9]);
        iVar2 = FUN_0019b388(iVar2 + iVar3 + 3);
      }
      else {
        iVar2 = FUN_000034d0(puVar12);
        iVar3 = FUN_000034d0(param_1[9]);
        iVar2 = (*(code *)*piVar1)(iVar2 + iVar3 + 3);
      }
      if (iVar2 != 0) {
        *param_2 = iVar2;
        FUN_000028d8(iVar2,&DAT_001a8700,puVar12);
        iVar3 = FUN_000034d0(puVar12);
        FUN_000028d8(iVar3 + iVar2 + 1,&DAT_001a8704,param_1[9]);
        return 0;
      }
      return 0xfffffffc;
    }
  }
  iVar2 = FUN_000034d0(puVar12);
  iVar3 = FUN_000034d0(param_1[3]);
  local_28 = iVar2 + iVar3 + 6;
  if (param_1[1] != 0) {
    iVar2 = FUN_000034d0();
    local_28 = iVar2 * 3 + local_28 + 1;
  }
  if (param_1[2] != 0) {
    iVar2 = FUN_000034d0();
    local_28 = iVar2 * 3 + local_28 + 1;
  }
  if (param_1[4] != 0) {
    iVar2 = FUN_000034d0();
    local_28 = iVar2 + local_28 + 3;
  }
  pcVar10 = (code *)*piVar1;
  if (pcVar10 == entry) {
    local_24 = FUN_0019b388(local_28);
  }
  else {
    local_24 = (*pcVar10)();
  }
  if (local_24 == 0) {
    return 0xfffffffc;
  }
  FUN_000028d8(local_24,&DAT_001a8700,puVar12);
  iVar2 = FUN_000034d0(local_24);
  iVar2 = iVar2 + local_24;
  if (param_1[1] != 0) {
    iVar3 = FUN_0016f7e0(param_1[1],*DAT_001a8708);
    if (iVar3 == 0) {
      pcVar10 = (code *)*DAT_001a870c;
      goto joined_r0x001a8614;
    }
    FUN_000028d8(iVar2,&DAT_001a8704,iVar3);
    if ((code *)*DAT_001a870c == entry) {
      FUN_0018a280(iVar3);
    }
    else {
      (*(code *)*DAT_001a870c)(iVar3);
    }
    iVar3 = FUN_000034d0(iVar2);
    iVar2 = iVar3 + iVar2;
  }
  if (param_1[2] != 0) {
    if (param_1[1] == 0) goto LAB_001a84ae;
    iVar3 = FUN_0016f7e0(param_1[2],DAT_001a8708[1]);
    if (iVar3 == 0) {
      pcVar10 = (code *)*DAT_001a870c;
joined_r0x001a8614:
      if (pcVar10 == entry) {
        FUN_0018a280(local_24);
      }
      else {
        (*pcVar10)(local_24);
      }
      return 0xfffffffc;
    }
    FUN_000028d8(iVar2,&DAT_001a8710,iVar3);
    if ((code *)*DAT_001a870c == entry) {
      FUN_0018a280(iVar3);
    }
    else {
      (*(code *)*DAT_001a870c)(iVar3);
    }
    iVar3 = FUN_000034d0(iVar2);
    iVar2 = iVar3 + iVar2;
  }
  if (param_1[1] != 0) {
    FUN_000028d8(iVar2,&DAT_001a8714);
    iVar2 = iVar2 + 1;
  }
LAB_001a84ae:
  iVar3 = FUN_00003318(param_1[3],0x3a);
  if (iVar3 == 0) {
    FUN_000028d8(iVar2,&DAT_001a8704,param_1[3]);
    iVar3 = FUN_000034d0(iVar2);
  }
  else {
    FUN_000028d8(iVar2,&DAT_001a8718,param_1[3]);
    iVar3 = FUN_000034d0(iVar2);
  }
  if (param_1[4] != 0) {
    FUN_000028d8(iVar3 + iVar2,&DAT_001a8710);
    FUN_000034d0(iVar3 + iVar2);
  }
  iVar3 = 0;
  puVar4 = param_1 + 5;
  iVar5 = FUN_001a4bc4(puVar4,0);
  iVar2 = local_24;
  while (iVar5 == 0) {
    local_24 = 0;
    puVar6 = (undefined4 *)FUN_001a4bdc(puVar4,iVar3);
    puVar9 = DAT_001a8708;
    iVar5 = FUN_0016f7e0(*puVar6,DAT_001a8708[2]);
    if (iVar5 == 0) {
      if (iVar2 == 0) {
        return 0xfffffffb;
      }
      pcVar10 = (code *)*DAT_001a870c;
      goto joined_r0x001a856c;
    }
    if (puVar6[1] == 0) {
      iVar7 = FUN_000034d0(iVar5);
      iVar7 = iVar7 + 2;
    }
    else {
      local_24 = FUN_0016f7e0(puVar6[1],puVar9[2]);
      puVar9 = DAT_001a870c;
      if (local_24 == 0) {
        if ((code *)*DAT_001a870c == entry) {
          FUN_0018a280(iVar5);
        }
        else {
          (*(code *)*DAT_001a870c)(iVar5);
        }
        if (iVar2 == 0) {
          return 0xfffffffb;
        }
        pcVar10 = (code *)*puVar9;
        goto joined_r0x001a856c;
      }
      iVar7 = FUN_000034d0(iVar5);
      iVar8 = FUN_000034d0(local_24);
      iVar7 = iVar7 + iVar8 + 3;
    }
    local_28 = local_28 + iVar7;
    if ((code *)*DAT_001a8720 == entry) {
      iVar7 = FUN_001ab47c(iVar2,local_28);
    }
    else {
      iVar7 = (*(code *)*DAT_001a8720)(iVar2);
    }
    if (iVar7 == 0) {
      if (iVar2 != 0) {
        if ((code *)*DAT_001a870c == entry) {
          FUN_0018a280(iVar2);
        }
        else {
          (*(code *)*DAT_001a870c)(iVar2);
        }
      }
      puVar4 = DAT_001a870c;
      if ((code *)*DAT_001a870c == entry) {
        FUN_0018a280(iVar5);
      }
      else {
        (*(code *)*DAT_001a870c)(iVar5);
      }
      if (local_24 == 0) {
        return 0xfffffffc;
      }
      pcVar10 = (code *)*puVar4;
      goto joined_r0x001a8614;
    }
    iVar2 = FUN_000034d0();
    if (puVar6[1] == 0) {
      FUN_000028d8(iVar2 + iVar7,&DAT_001a872c,iVar5);
    }
    else {
      FUN_000028d8(iVar2 + iVar7,s___s__s_001a8724,iVar5,local_24);
      if (local_24 != 0) {
        if ((code *)*DAT_001a870c == entry) {
          FUN_0018a280(local_24);
        }
        else {
          (*(code *)*DAT_001a870c)();
        }
      }
    }
    if ((code *)*DAT_001a870c == entry) {
      FUN_0018a280(iVar5);
    }
    else {
      (*(code *)*DAT_001a870c)(iVar5);
    }
    iVar3 = iVar3 + 1;
    iVar5 = FUN_001a4bc4(puVar4,iVar3);
    iVar2 = iVar7;
  }
  local_2c = 0;
  do {
    iVar3 = FUN_001a4bc4(param_1 + 7,local_2c);
    if (iVar3 != 0) {
      *param_2 = iVar2;
      return 0;
    }
    puVar9 = (undefined4 *)FUN_001a4bdc(param_1 + 7,local_2c);
    puVar4 = DAT_001a8708;
    iVar3 = FUN_0016f7e0(*puVar9,DAT_001a8708[3]);
    if (iVar3 == 0) {
      if (iVar2 == 0) {
        return 0xfffffffb;
      }
      pcVar10 = (code *)*DAT_001a870c;
      goto joined_r0x001a856c;
    }
    local_24 = FUN_0016f7e0(puVar9[1],puVar4[3]);
    puVar4 = DAT_001a870c;
    if (local_24 == 0) {
      if ((code *)*DAT_001a870c == entry) {
        FUN_0018a280(iVar3);
      }
      else {
        (*(code *)*DAT_001a870c)(iVar3);
      }
      if (iVar2 != 0) {
        pcVar10 = (code *)*puVar4;
joined_r0x001a856c:
        if (pcVar10 == entry) {
          FUN_0018a280(iVar2);
        }
        else {
          (*pcVar10)(iVar2);
        }
      }
      return 0xfffffffb;
    }
    iVar5 = FUN_000034d0(iVar3);
    iVar7 = FUN_000034d0(local_24);
    local_28 = local_28 + iVar5 + iVar7 + 4;
    if ((code *)*DAT_001a8720 == entry) {
      iVar5 = FUN_001ab47c(iVar2,local_28);
    }
    else {
      iVar5 = (*(code *)*DAT_001a8720)(iVar2);
    }
    if (iVar5 == 0) {
      if (iVar2 != 0) {
        if ((code *)*DAT_001a87e0 == entry) {
          FUN_0018a280(iVar2);
        }
        else {
          (*(code *)*DAT_001a87e0)(iVar2);
        }
      }
      puVar4 = DAT_001a87e0;
      if ((code *)*DAT_001a87e0 == entry) {
        FUN_0018a280(iVar3);
      }
      else {
        (*(code *)*DAT_001a87e0)(iVar3);
      }
      pcVar10 = (code *)*puVar4;
      goto joined_r0x001a8614;
    }
    iVar2 = FUN_000034d0();
    if (local_2c == 0) {
      pcVar11 = s___s__s_001a87e4;
    }
    else {
      pcVar11 = s___s__s_001a87d8;
    }
    FUN_00002904(iVar2 + iVar5,local_28 - ((iVar2 + iVar5) - iVar5),pcVar11,iVar3,local_24);
    puVar4 = DAT_001a87e0;
    if ((code *)*DAT_001a87e0 == entry) {
      FUN_0018a280(iVar3);
    }
    else {
      (*(code *)*DAT_001a87e0)(iVar3);
    }
    if ((code *)*puVar4 == entry) {
      FUN_0018a280(local_24);
    }
    else {
      (*(code *)*puVar4)(local_24);
    }
    local_2c = local_2c + 1;
    iVar2 = iVar5;
  } while( true );
}

