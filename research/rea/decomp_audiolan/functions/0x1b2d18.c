// rea decompile_all
// name: FUN_001b2d18
// address: 0x1b2d18
// body: available
// range: 0x1b2d18-0x1b30ff inclusive
// range: 0x1b3188-0x1b31b3 inclusive
// range: 0x1b31b6-0x1b3225 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b2d40 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1b2e9e to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001b2d18(int *param_1)

{
  short sVar1;
  uint3 uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int *local_28;
  
  if ((char)param_1[6] == '\x01') {
    FUN_00015210(s_Assertion___s__failed_at_line__d_001b3134,
                 s_don_t_call_tcp_output_for_listen_001b310c,DAT_001b3108,DAT_001b3104);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  if ((int *)*DAT_001b3100 == param_1) {
    return 0;
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0x18);
  if ((uint)*(ushort *)(param_1 + 0x13) <= (uint)*(ushort *)(param_1 + 0x18)) {
    uVar4 = (uint)*(ushort *)(param_1 + 0x13);
  }
  piVar10 = (int *)param_1[0x1b];
  if (((int)((uint)*(byte *)((int)param_1 + 0x1e) * 0x40000000) < 0) &&
     ((piVar10 == (int *)0x0 ||
      (puVar8 = (uint *)(piVar10[3] + 4), uVar7 = *puVar8,
      uVar4 < (((uint)*(byte *)(piVar10[3] + 7) | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
               (uint)*(uint3 *)puVar8 << 0x18) - param_1[0x12]) + (uint)*(ushort *)(piVar10 + 2)))))
  {
    uVar4 = param_1[0x14];
    iVar5 = FUN_001b3228(param_1,0,0,
                         uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                         uVar4 << 0x18);
    if (iVar5 != 0) {
      iVar11 = *(int *)(iVar5 + 4);
      *(byte *)((int)param_1 + 0x1e) = *(byte *)((int)param_1 + 0x1e) & 0xfc;
      uVar3 = FUN_0018d614(iVar5,param_1,param_1 + 1,6,*(undefined2 *)(iVar5 + 8));
      *(char *)(iVar11 + 0x10) = (char)uVar3;
      *(char *)(iVar11 + 0x11) = (char)((ushort)uVar3 >> 8);
      FUN_0018defc(iVar5,param_1,param_1 + 1,*(undefined1 *)((int)param_1 + 10),
                   *(undefined1 *)((int)param_1 + 9),6);
      FUN_001aa008(iVar5);
      return 0;
    }
    return 0xfffffffd;
  }
  piVar9 = (int *)param_1[0x1c];
  local_28 = (int *)param_1[0x1c];
  while (piVar6 = piVar9, piVar6 != (int *)0x0) {
    local_28 = piVar6;
    piVar9 = (int *)*piVar6;
  }
  while ((piVar10 != (int *)0x0 &&
         (iVar5 = piVar10[3], uVar7 = *(uint *)(iVar5 + 4),
         (((uint)*(byte *)(iVar5 + 7) | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
          (uint)*(uint3 *)(iVar5 + 4) << 0x18) - param_1[0x12]) + (uint)*(ushort *)(piVar10 + 2) <=
         uVar4))) {
    if ((int)((uint)*(byte *)(iVar5 + 0xd) << 0x1d) < 0) {
      FUN_00015210(s_Assertion___s__failed_at_line__d_001b3134,s_RST_not_expected_here__001b3168,
                   0x3c4,DAT_001b3104);
                    /* WARNING: Subroutine does not return */
      FUN_000032f8();
    }
    if (((((param_1[0x1c] != 0) && ((*(byte *)((int)param_1 + 0x1e) & 0x44) == 0)) &&
         ((piVar9 = (int *)param_1[0x1b], piVar9 == (int *)0x0 ||
          ((*piVar9 == 0 && (*(ushort *)(piVar9 + 2) < *(ushort *)((int)param_1 + 0x36))))))) &&
        (*(short *)((int)param_1 + 0x66) != 0)) &&
       ((*(ushort *)(param_1 + 0x1a) < 0x80 && ((*(byte *)((int)param_1 + 0x1e) & 0xa0) == 0))))
    break;
    param_1[0x1b] = *piVar10;
    if ((char)param_1[6] != '\x02') {
      iVar5 = piVar10[3];
      uVar3 = *(undefined2 *)(iVar5 + 0xc);
      *(char *)(iVar5 + 0xc) = (char)uVar3;
      *(byte *)(iVar5 + 0xd) = (byte)((ushort)uVar3 >> 8) | 0x10;
      *(byte *)((int)param_1 + 0x1e) = *(byte *)((int)param_1 + 0x1e) & 0xfc;
    }
    iVar5 = param_1[10];
    iVar11 = piVar10[3];
    *(char *)(iVar11 + 8) = (char)((uint)iVar5 >> 0x18);
    *(char *)(iVar11 + 9) = (char)((uint)iVar5 >> 0x10);
    *(char *)(iVar11 + 10) = (char)((uint)iVar5 >> 8);
    *(char *)(iVar11 + 0xb) = (char)iVar5;
    uVar3 = *(undefined2 *)((int)param_1 + 0x2e);
    iVar5 = piVar10[3];
    *(char *)(iVar5 + 0xe) = (char)((ushort)uVar3 >> 8);
    *(char *)(iVar5 + 0xf) = (char)uVar3;
    param_1[0xc] = param_1[10] + (uint)*(ushort *)((int)param_1 + 0x2e);
    iVar5 = piVar10[3];
    if ((*(byte *)((int)piVar10 + 10) & 1) != 0) {
      iVar11 = FUN_001b1fe0(DAT_001b3180,param_1 + 1);
      *(uint *)(iVar5 + 0x14) =
           (iVar11 + 0x2040000U >> 0x18) + 0x400 | (iVar11 + 0x2040000U & 0xff00) << 8 |
           iVar11 << 0x18;
    }
    if ((short)param_1[0xd] == -1) {
      *(undefined2 *)(param_1 + 0xd) = 0;
    }
    if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
      iVar5 = FUN_0018e22c(param_1 + 1);
      if (iVar5 != 0) {
        *param_1 = *(int *)(iVar5 + 4);
        goto LAB_001b2faa;
      }
    }
    else {
LAB_001b2faa:
      if (param_1[0xe] == 0) {
        param_1[0xe] = *DAT_001b3184;
        iVar5 = piVar10[3];
        param_1[0xf] = (uint)CONCAT12(*(undefined1 *)(iVar5 + 5),
                                      CONCAT11(*(undefined1 *)(iVar5 + 6),*(undefined1 *)(iVar5 + 7)
                                              )) | (uint)*(uint3 *)(iVar5 + 4) << 0x18;
      }
      iVar5 = piVar10[1];
      if (*(ushort *)(iVar5 + 0xe) < 2) {
        sVar1 = (short)piVar10[3] - (short)*(undefined4 *)(iVar5 + 4);
        *(short *)(iVar5 + 10) = *(short *)(iVar5 + 10) - sVar1;
        *(short *)(piVar10[1] + 8) = *(short *)(piVar10[1] + 8) - sVar1;
        *(int *)(piVar10[1] + 4) = piVar10[3];
        iVar5 = piVar10[3];
        *(undefined1 *)(iVar5 + 0x10) = 0;
        *(undefined1 *)(iVar5 + 0x11) = 0;
        uVar3 = FUN_0018d614(piVar10[1],param_1,param_1 + 1,6,*(undefined2 *)(piVar10[1] + 8));
        iVar5 = piVar10[3];
        *(char *)(iVar5 + 0x10) = (char)uVar3;
        *(char *)(iVar5 + 0x11) = (char)((ushort)uVar3 >> 8);
        FUN_0018defc(piVar10[1],param_1,param_1 + 1,*(undefined1 *)((int)param_1 + 10),
                     *(undefined1 *)((int)param_1 + 9),6);
      }
    }
    iVar5 = piVar10[3];
    uVar7 = *(uint *)(iVar5 + 4);
    iVar5 = ((uint)*(byte *)(iVar5 + 7) | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
            (uint)*(uint3 *)(iVar5 + 4) << 0x18) + (uint)((*(byte *)(iVar5 + 0xd) & 3) != 0) +
            (uint)*(ushort *)(piVar10 + 2);
    if (param_1[0x14] - iVar5 < 0) {
      param_1[0x14] = iVar5;
    }
    iVar5 = piVar10[3];
    if ((uint)((*(byte *)(iVar5 + 0xd) & 3) != 0) + (uint)*(ushort *)(piVar10 + 2) == 0) {
      FUN_001b4c2e(piVar10);
    }
    else {
      *piVar10 = 0;
      if (param_1[0x1c] == 0) {
        param_1[0x1c] = (int)piVar10;
        local_28 = piVar10;
      }
      else {
        uVar7 = *(uint *)(iVar5 + 4);
        uVar7 = (uint)*(byte *)(iVar5 + 7) | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                (uint)*(uint3 *)(iVar5 + 4) << 0x18;
        uVar2 = *(uint3 *)(local_28[3] + 4);
        piVar9 = param_1 + 0x1c;
        if ((int)(uVar7 - ((uint)*(byte *)(local_28[3] + 7) | (uVar2 & 0xff0000) >> 8 |
                           (uVar2 & 0xff00) << 8 | (uint)uVar2 << 0x18)) < 0) {
          do {
            piVar6 = piVar9;
            piVar9 = (int *)*piVar6;
            if (piVar9 == (int *)0x0) break;
            iVar5 = piVar9[3];
          } while ((int)(((uint)CONCAT11(*(undefined1 *)(iVar5 + 6),*(undefined1 *)(iVar5 + 7)) |
                          (*(uint *)(iVar5 + 4) & 0xff00) << 8 | (uint)*(uint3 *)(iVar5 + 4) << 0x18
                         ) - uVar7) < 0);
          *piVar10 = (int)piVar9;
          *piVar6 = (int)piVar10;
        }
        else {
          *local_28 = (int)piVar10;
          local_28 = piVar10;
        }
      }
    }
    piVar10 = (int *)param_1[0x1b];
  }
  *(byte *)((int)param_1 + 0x1e) = *(byte *)((int)param_1 + 0x1e) & 0x7f;
  return 0;
}

