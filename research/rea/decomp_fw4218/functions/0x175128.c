// rea decompile_all
// name: FUN_00175128
// address: 0x175128
// body: available
// range: 0x175128-0x1752f7 inclusive
// range: 0x1752fa-0x17532d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x17532a to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00175128(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  
  uVar2 = *param_1;
  if ((int)(uVar2 << 0x1b) < 0) {
    FUN_0017544c(param_2,param_1[2]);
  }
  if ((int)(uVar2 << 0x1c) < 0) {
    FUN_0017544c(param_2,param_1[3]);
  }
  puVar1 = (uint *)param_1[7];
  while (puVar1 != (uint *)0x0) {
    uVar8 = *puVar1;
    puVar7 = (uint *)puVar1[4];
    if ((int)(uVar8 << 0x1b) < 0) {
      puVar4 = (ushort *)(puVar1[1] - 4);
      uVar5 = (uint)*(ushort *)(puVar1[1] - 2);
      uVar3 = (int)puVar4 - (*puVar4 + 0x18);
      if (uVar5 == 0) {
        uVar5 = *(uint *)(uVar3 + 0x10);
      }
      if (*param_2 == uVar3) {
        *(uint *)(uVar3 + 0x10) = param_2[1];
      }
      if ((puVar4 < (ushort *)(uVar3 + 0x18)) ||
         (uVar6 = *(uint *)(uVar3 + 0x10), (ushort *)(uVar6 + (int)(uVar3 + 0x18)) <= puVar4))
      goto LAB_0017532a;
      uVar5 = *(int *)(uVar3 + 0x14) + uVar5;
      *(uint *)(uVar3 + 0x14) = uVar5;
      if (uVar6 < uVar5) goto LAB_0017532a;
      if (uVar5 == uVar6) {
        if (*(int *)(uVar3 + 0xc) == 0) {
          if (*param_2 != uVar3) goto LAB_0017532a;
          *(undefined4 *)(uVar3 + 0x14) = 0;
          *(undefined4 *)(uVar3 + 0x10) = 0;
          param_2[1] = 0;
        }
        else {
          if ((*param_2 == uVar3) || (*(int *)(uVar3 + 8) == 0)) goto LAB_0017532a;
          *(int *)(*(int *)(uVar3 + 8) + 0xc) = *(int *)(uVar3 + 0xc);
          *(undefined4 *)(*(int *)(uVar3 + 0xc) + 8) = *(undefined4 *)(uVar3 + 8);
          (**(code **)(DAT_00175330 + 4))(*(undefined4 *)(uVar3 + 4));
        }
      }
    }
    if ((int)(uVar8 << 0x1c) < 0) {
      puVar4 = (ushort *)(puVar1[2] - 4);
      uVar5 = (uint)*(ushort *)(puVar1[2] - 2);
      uVar3 = (int)puVar4 - (*puVar4 + 0x18);
      if (uVar5 == 0) {
        uVar5 = *(uint *)(uVar3 + 0x10);
      }
      if (*param_2 == uVar3) {
        *(uint *)(uVar3 + 0x10) = param_2[1];
      }
      if ((puVar4 < (ushort *)(uVar3 + 0x18)) ||
         (uVar6 = *(uint *)(uVar3 + 0x10), (ushort *)(uVar6 + (int)(uVar3 + 0x18)) <= puVar4))
      goto LAB_0017532a;
      uVar5 = *(int *)(uVar3 + 0x14) + uVar5;
      *(uint *)(uVar3 + 0x14) = uVar5;
      if (uVar6 < uVar5) goto LAB_0017532a;
      if (uVar5 == uVar6) {
        if (*(int *)(uVar3 + 0xc) == 0) {
          if (*param_2 != uVar3) goto LAB_0017532a;
          *(undefined4 *)(uVar3 + 0x14) = 0;
          *(undefined4 *)(uVar3 + 0x10) = 0;
          param_2[1] = 0;
        }
        else {
          if ((*param_2 == uVar3) || (*(int *)(uVar3 + 8) == 0)) goto LAB_0017532a;
          *(int *)(*(int *)(uVar3 + 8) + 0xc) = *(int *)(uVar3 + 0xc);
          *(undefined4 *)(*(int *)(uVar3 + 0xc) + 8) = *(undefined4 *)(uVar3 + 8);
          (**(code **)(DAT_00175330 + 4))(*(undefined4 *)(uVar3 + 4));
        }
      }
    }
    uVar8 = uVar8 & 0xffffffe0;
    if (*param_2 == uVar8) {
      *(uint *)(uVar8 + 0x10) = param_2[1];
    }
    if ((puVar1 < (uint *)(uVar8 + 0x18)) ||
       (uVar3 = *(uint *)(uVar8 + 0x10), (uint *)(uVar3 + (int)(uVar8 + 0x18)) <= puVar1))
    goto LAB_0017532a;
    uVar5 = *(int *)(uVar8 + 0x14) + 0x14;
    *(uint *)(uVar8 + 0x14) = uVar5;
    if (uVar3 < uVar5) goto LAB_0017532a;
    puVar1 = puVar7;
    if (uVar5 == uVar3) {
      if (*(int *)(uVar8 + 0xc) == 0) {
        if (*param_2 != uVar8) goto LAB_0017532a;
        *(undefined4 *)(uVar8 + 0x14) = 0;
        *(undefined4 *)(uVar8 + 0x10) = 0;
        param_2[1] = 0;
      }
      else {
        if ((*param_2 == uVar8) || (*(int *)(uVar8 + 8) == 0)) goto LAB_0017532a;
        *(int *)(*(int *)(uVar8 + 8) + 0xc) = *(int *)(uVar8 + 0xc);
        *(undefined4 *)(*(int *)(uVar8 + 0xc) + 8) = *(undefined4 *)(uVar8 + 8);
        (**(code **)(DAT_00175330 + 4))(*(undefined4 *)(uVar8 + 4));
      }
    }
  }
  uVar8 = param_1[4];
  while (uVar8 != 0) {
    uVar3 = *(uint *)(uVar8 + 0x18);
    FUN_00175128(uVar8,param_2);
    uVar8 = uVar3;
  }
  uVar2 = uVar2 & 0xffffffe0;
  if (*param_2 == uVar2) {
    *(uint *)(uVar2 + 0x10) = param_2[1];
  }
  if (((uint *)(uVar2 + 0x18) <= param_1) &&
     (uVar8 = *(uint *)(uVar2 + 0x10), param_1 < (uint *)(uVar8 + (int)(uVar2 + 0x18)))) {
    uVar3 = *(int *)(uVar2 + 0x14) + 0x20;
    *(uint *)(uVar2 + 0x14) = uVar3;
    if (uVar3 <= uVar8) {
      if (uVar3 != uVar8) {
        return;
      }
      if (*(int *)(uVar2 + 0xc) == 0) {
        if (*param_2 == uVar2) {
          *(undefined4 *)(uVar2 + 0x14) = 0;
          *(undefined4 *)(uVar2 + 0x10) = 0;
          param_2[1] = 0;
          return;
        }
      }
      else if ((*param_2 != uVar2) && (*(int *)(uVar2 + 8) != 0)) {
        *(int *)(*(int *)(uVar2 + 8) + 0xc) = *(int *)(uVar2 + 0xc);
        *(undefined4 *)(*(int *)(uVar2 + 0xc) + 8) = *(undefined4 *)(uVar2 + 8);
        (**(code **)(DAT_00175330 + 4))(*(undefined4 *)(uVar2 + 4));
        return;
      }
    }
  }
LAB_0017532a:
                    /* WARNING: Subroutine does not return */
  FUN_00003538();
}

