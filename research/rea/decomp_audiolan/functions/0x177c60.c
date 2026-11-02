// rea decompile_all
// name: FUN_00177c60
// address: 0x177c60
// body: available
// range: 0x177c60-0x178091 inclusive
// range: 0x1780a8-0x178205 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_00177c60(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *local_28;
  int local_20;
  
  uVar3 = FUN_001a4490(0);
  iVar10 = param_1 + 0x9c;
  iVar4 = *(int *)(param_1 + 0x8c);
joined_r0x00177c7e:
  iVar9 = iVar4;
  if (iVar9 != 0) {
    iVar4 = *(int *)(iVar9 + 0x1c);
    local_28 = *(int **)(iVar9 + 4);
joined_r0x00177c8a:
    piVar2 = local_28;
    if (piVar2 != (int *)0x0) {
      local_28 = (int *)piVar2[0xe];
      uVar5 = FUN_001a4490(0);
      iVar6 = FUN_0017452c(iVar9,piVar2,&DAT_00178094);
      if ((iVar6 != 0) && (*(char *)(iVar6 + 0x2c) != '\x13')) goto code_r0x00177cb0;
      goto LAB_00177cd4;
    }
    goto joined_r0x00177c7e;
  }
  iVar4 = *(int *)(param_1 + 0x8c);
  while (iVar9 = iVar4, iVar9 != 0) {
    iVar4 = *(int *)(iVar9 + 0x1c);
    if ((*(int *)(iVar9 + 4) == 0) &&
       (((((iVar6 = *(int *)(iVar9 + 8), iVar6 != 0 && (*(char *)(iVar6 + 0x2c) != '\t')) &&
          (*(int *)(iVar6 + 0x30) + 0xb4U < uVar3)) ||
         (((iVar11 = *(int *)(iVar9 + 0xc), iVar11 != 0 && (*(char *)(iVar11 + 0x2c) != '\x04')) &&
          (*(int *)(iVar11 + 0x30) + 0xb4U < uVar3)))) ||
        (((iVar6 == 0 || (*(char *)(iVar6 + 0x2c) == '\t')) &&
         ((iVar11 == 0 ||
          ((*(char *)(iVar11 + 0x2c) == '\x04' && (*(int *)(iVar11 + 0x34) + 10U <= uVar3))))))))))
    {
      FUN_00177c14(param_1,iVar9,0);
    }
  }
  iVar4 = 0;
  do {
    while( true ) {
      iVar9 = FUN_001a4bc4(iVar10,iVar4);
      if (iVar9 != 0) {
        return;
      }
      iVar9 = FUN_001a4bdc(iVar10,iVar4);
      cVar1 = *(char *)(iVar9 + 0x2c);
      if (cVar1 != '\x0e') break;
      if ((*(int *)(iVar9 + 0x24) == 0) || (*(int *)(iVar9 + 0x34) + 5U <= uVar3)) {
LAB_001781ba:
        FUN_001a4cbc(iVar10,iVar4);
        FUN_00173680(iVar9);
        FUN_00173bae(*(undefined4 *)(iVar9 + 0x2b48));
        *(undefined4 *)(iVar9 + 0x2b48) = 0;
        FUN_001a7396(iVar9);
      }
      else {
LAB_001781b6:
        iVar4 = iVar4 + 1;
      }
    }
    if ((((cVar1 == '\t') || (cVar1 == '\x04')) || (cVar1 == '\x0e')) || (cVar1 == '\x13'))
    goto LAB_001781ba;
    if (uVar3 <= *(int *)(iVar9 + 0x30) + 0xb4U) goto LAB_001781b6;
    FUN_001a4cbc(iVar10,iVar4);
    FUN_00173680(iVar9);
    FUN_00173bae(*(undefined4 *)(iVar9 + 0x2b48));
    *(undefined4 *)(iVar9 + 0x2b48) = 0;
    FUN_001a7396(iVar9);
  } while( true );
code_r0x00177cb0:
  if (uVar5 <= *(int *)(iVar6 + 0x30) + 0xb4U) goto joined_r0x00177c8a;
  FUN_001a6d94(*(undefined4 *)(param_1 + 0xa4),iVar6);
  FUN_00178704(iVar6,iVar9);
  FUN_001a4a80(iVar10,iVar6,0);
LAB_00177cd4:
  iVar6 = FUN_00174724(iVar9,piVar2,&DAT_00178094);
  if ((iVar6 != 0) && (*(char *)(iVar6 + 0x2c) != '\x0e')) {
    if (uVar5 <= *(int *)(iVar6 + 0x30) + 0xb4U) goto joined_r0x00177c8a;
    FUN_001a6d94(*(undefined4 *)(param_1 + 0xa4),iVar6);
    FUN_00178704(iVar6,iVar9);
    FUN_001a4a80(iVar10,iVar6,0);
  }
  iVar6 = FUN_00174440(iVar9,piVar2);
  if ((((iVar6 != 0) && (*(char *)(iVar6 + 0x2c) != '\t')) &&
      (uVar5 <= *(int *)(iVar6 + 0x30) + 0xb4U)) ||
     (((iVar6 = FUN_00174630(iVar9,piVar2), iVar6 != 0 && (*(char *)(iVar6 + 0x2c) != '\x04')) &&
      (uVar5 <= *(uint *)(iVar9 + 0x18))))) goto joined_r0x00177c8a;
  iVar6 = FUN_0017452c(iVar9,piVar2,s_REFER_00178098);
  if ((iVar6 != 0) && (*(char *)(iVar6 + 0x2c) != '\x13')) {
    if (uVar5 <= *(int *)(iVar6 + 0x30) + 0xb4U) goto joined_r0x00177c8a;
    FUN_001a6d94(*(undefined4 *)(param_1 + 0xa4),iVar6);
    FUN_00178704(iVar6,iVar9);
    FUN_001a4a80(iVar10,iVar6,0);
  }
  iVar6 = FUN_00174724(iVar9,piVar2,s_REFER_00178098);
  if ((iVar6 != 0) && (*(char *)(iVar6 + 0x2c) != '\x0e')) {
    if (uVar5 <= *(int *)(iVar6 + 0x30) + 0xb4U) goto joined_r0x00177c8a;
    FUN_001a6d94(*(undefined4 *)(param_1 + 0xa4),iVar6);
    FUN_00178704(iVar6,iVar9);
    FUN_001a4a80(iVar10,iVar6,0);
  }
  uVar5 = FUN_001a4490(0);
  local_20 = -1;
  iVar6 = FUN_00174440(iVar9,piVar2);
  if (piVar2 != (int *)0x0) {
    iVar11 = 1;
    iVar7 = FUN_001a4bc4(piVar2[10],1);
    while (iVar7 == 0) {
      iVar7 = FUN_001a4bdc(piVar2[10],iVar11);
      iVar8 = FUN_001a6f04(**(undefined4 **)(iVar7 + 0x1c),s_INVITE_001780a0);
      if (iVar8 == 0) {
        if ((iVar6 != iVar7) && (*(char *)(iVar7 + 0x2c) == '\t')) {
          iVar8 = *(int *)(iVar7 + 0x30);
          goto joined_r0x00177e32;
        }
      }
      else if (*(char *)(iVar7 + 0x2c) == '\x13') {
        iVar8 = *(int *)(iVar7 + 0x30);
joined_r0x00177e32:
        if (iVar8 + 0x1eU < uVar5) {
          FUN_001a6d94(*(undefined4 *)(param_1 + 0xa4),iVar7);
          FUN_001a4cbc(piVar2[10],iVar11);
          FUN_001a4a80(param_1 + 0x9c,iVar7,0);
          local_20 = 0;
          break;
        }
      }
      iVar11 = iVar11 + 1;
      iVar7 = FUN_001a4bc4(piVar2[10],iVar11);
    }
    iVar11 = FUN_00174630(iVar9,piVar2);
    iVar6 = 1;
    iVar7 = FUN_001a4bc4(piVar2[0xb],1);
    while (iVar7 == 0) {
      iVar7 = FUN_001a4bdc(piVar2[0xb],iVar6);
      iVar8 = FUN_001a6f04(**(undefined4 **)(iVar7 + 0x1c),s_INVITE_001780a0);
      if (iVar8 == 0) {
        if ((iVar11 != iVar7) && (*(char *)(iVar7 + 0x2c) == '\x04')) {
          iVar8 = *(int *)(iVar7 + 0x30);
          goto joined_r0x00177ebe;
        }
      }
      else if (*(char *)(iVar7 + 0x2c) == '\x0e') {
        iVar8 = *(int *)(iVar7 + 0x30);
joined_r0x00177ebe:
        if (iVar8 + 0x1eU < uVar5) {
          FUN_001a6d94(*(undefined4 *)(param_1 + 0xa4),iVar7);
          FUN_001a4cbc(piVar2[0xb],iVar6);
          FUN_001a4a80(param_1 + 0x9c,iVar7,0);
          goto joined_r0x00177c8a;
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = FUN_001a4bc4(piVar2[0xb],iVar6);
    }
    if (local_20 == 0) goto joined_r0x00177c8a;
  }
  iVar6 = FUN_0017452c(iVar9,piVar2,&DAT_00178094);
  if (((iVar6 != 0) || (iVar6 = FUN_00174724(iVar9,piVar2,&DAT_00178094), iVar6 != 0)) &&
     ((*(char *)(iVar6 + 0x2c) == '\x13' || (*(char *)(iVar6 + 0x2c) == '\x0e')))) {
    FUN_00172154(iVar9,piVar2);
    if (piVar2[0xf] == 0) {
      iVar6 = piVar2[0xe];
      *(int *)(iVar9 + 4) = iVar6;
      if (iVar6 != 0) {
        *(undefined4 *)(iVar6 + 0x3c) = 0;
      }
    }
    else {
      *(int *)(piVar2[0xf] + 0x38) = piVar2[0xe];
      if (piVar2[0xe] != 0) {
        *(int *)(piVar2[0xe] + 0x3c) = piVar2[0xf];
      }
      piVar2[0xe] = 0;
      piVar2[0xf] = 0;
    }
    goto LAB_00177f6a;
  }
  uVar5 = FUN_001a4490(0);
  iVar11 = *(int *)(iVar9 + 8);
  iVar6 = iVar11;
  if ((iVar11 == 0) && (iVar6 = *(int *)(iVar9 + 0xc), *(int *)(iVar9 + 0xc) == 0)) {
    if (piVar2 != (int *)0x0) {
      FUN_00172154(iVar9,piVar2);
      iVar6 = piVar2[0xe];
      if (piVar2[0xf] != 0) {
        *(int *)(piVar2[0xf] + 0x38) = iVar6;
        if (piVar2[0xe] != 0) {
          *(int *)(piVar2[0xe] + 0x3c) = piVar2[0xf];
        }
        piVar2[0xe] = 0;
        piVar2[0xf] = 0;
        FUN_0017389c(param_1,piVar2);
        goto joined_r0x00177c7e;
      }
      *(int *)(iVar9 + 4) = iVar6;
      if (iVar6 != 0) {
        *(undefined4 *)(iVar6 + 0x3c) = 0;
      }
      FUN_0017389c(param_1,piVar2);
      goto LAB_0017808c;
    }
  }
  else if ((*(char *)(iVar6 + 0x2c) == '\t') || (*(char *)(iVar6 + 0x2c) == '\x04')) {
    if (iVar11 == iVar6) {
      if (*(int *)(iVar11 + 0x24) != 0) {
        iVar6 = *(int *)(*(int *)(iVar11 + 0x24) + 0xc);
joined_r0x0017806a:
        if ((((iVar6 - 300U < 100) || (iVar6 - 400U < 100)) || (iVar6 - 500U < 100)) ||
           (iVar6 - 600U < 100)) goto LAB_00178082;
      }
    }
    else if (*(int *)(iVar9 + 0xc) == iVar6) {
      iVar6 = *(int *)(*(int *)(iVar9 + 0xc) + 0x24);
      if (iVar6 != 0) {
        iVar6 = *(int *)(iVar6 + 0xc);
        goto joined_r0x0017806a;
      }
LAB_00178082:
      FUN_00177c14(param_1,iVar9,piVar2);
LAB_0017808c:
      local_28 = (int *)0x0;
      goto joined_r0x00177c8a;
    }
  }
  else if ((*(int *)(iVar6 + 0x30) + 0xb4U < uVar5) && (piVar2 != (int *)0x0)) {
    FUN_00172154(iVar9,piVar2);
    if (piVar2[0xf] == 0) {
      iVar11 = piVar2[0xe];
      *(int *)(iVar9 + 4) = iVar11;
      if (iVar11 != 0) {
        *(undefined4 *)(iVar11 + 0x3c) = 0;
      }
    }
    else {
      *(int *)(piVar2[0xf] + 0x38) = piVar2[0xe];
      if (piVar2[0xe] != 0) {
        *(int *)(piVar2[0xe] + 0x3c) = piVar2[0xf];
      }
      piVar2[0xe] = 0;
      piVar2[0xf] = 0;
    }
    FUN_00178792(param_1,4,iVar9,piVar2,iVar6);
    FUN_0017389c(param_1,piVar2);
    FUN_00179b24(param_1);
    goto joined_r0x00177c7e;
  }
  if (*piVar2 != -1) goto joined_r0x00177c8a;
  FUN_00172154(iVar9,piVar2);
  if (piVar2[0xf] == 0) {
    iVar6 = piVar2[0xe];
    *(int *)(iVar9 + 4) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(iVar6 + 0x3c) = 0;
    }
  }
  else {
    *(int *)(piVar2[0xf] + 0x38) = piVar2[0xe];
    if (piVar2[0xe] != 0) {
      *(int *)(piVar2[0xe] + 0x3c) = piVar2[0xf];
    }
    piVar2[0xe] = 0;
    piVar2[0xf] = 0;
  }
LAB_00177f6a:
  FUN_0017389c(param_1,piVar2);
  goto joined_r0x00177c8a;
}

