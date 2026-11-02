// rea decompile_all
// name: FUN_00047a80
// address: 0x47a80
// body: available
// range: 0x47a80-0x47af7 inclusive
// range: 0x173a4c-0x173a53 inclusive
// range: 0x1a68b0-0x1a6a6b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x47af4 to 0x2890 thunk_FUN_00002898 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00047a80(uint param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int local_28 [4];
  
  iVar3 = _DAT_00047af8;
  if (param_1 < 2) {
    if (*(int *)(_DAT_00047af8 + param_1 * 4) == 0) {
      iVar2 = FUN_001f01c4(0x1b8,1);
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = FUN_001a6d00(iVar2,param_1,param_2,param_3);
      }
      *(int *)(iVar3 + param_1 * 4) = iVar1;
    }
    else {
      iVar1 = *(int *)(_DAT_00047af8 + param_1 * 4);
    }
    if (iVar1 != 0) {
      uVar4 = 1 << (*(uint *)(iVar1 + 0xdc) & 0xff);
      iVar3 = *(int *)(iVar1 + 0xec);
      if (param_3 == 1) {
        *(uint *)(iVar3 + 0x10) =
             (uVar4 | *(uint *)(iVar3 + 0x10)) & 3 | *(uint *)(iVar3 + 0x10) & 0xfffffffc;
        FUN_0005b1b8(*(undefined4 *)(iVar1 + 0xe4),iVar1);
        FUN_001a6768(iVar1);
        iVar3 = *(int *)(iVar1 + 0xe4);
        piVar10 = (int *)(iVar3 + 0x88);
        local_28[1] = 1;
        local_28[0] = *(int *)(iVar3 + 0x8c) - *piVar10 >> 2;
        piVar5 = local_28;
        if (local_28[0] == 0) {
          piVar5 = local_28 + 1;
        }
        iVar2 = *piVar5;
        puVar6 = (undefined4 *)FUN_00173860(iVar2 << 2,0);
        puVar9 = *(undefined4 **)(iVar3 + 0x8c);
        puVar7 = puVar6;
        for (puVar8 = (undefined4 *)*piVar10; puVar8 != puVar9; puVar8 = puVar8 + 1) {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar8;
          }
          puVar7 = puVar7 + 1;
        }
        if ((*(int *)(iVar3 + 0x8c) - *piVar10 >> 2) * 4 >> 2 == 0) {
          FUN_00002898(DAT_001a6a6c);
        }
        else {
          uVar4 = FUN_001b2a1c(*puVar6);
          iVar3 = *(int *)(iVar1 + 0xdc) * 4 + 0x20;
          *(uint *)(*(int *)(iVar1 + 0xec) + iVar3) =
               uVar4 & 0x1f | *(uint *)(*(int *)(iVar1 + 0xec) + iVar3) & 0xffffffe0;
        }
        *(undefined1 *)(iVar1 + 0xe0) = 1;
        FUN_001c6a78(puVar6,iVar2 * 4 >> 2,0);
        return;
      }
      *(uint *)(iVar3 + 0x10) =
           ~uVar4 & 3 & *(uint *)(iVar3 + 0x10) | *(uint *)(iVar3 + 0x10) & 0xfffffffc;
      uVar4 = FUN_001b2a1c(*(undefined4 *)(*(int *)(iVar1 + 0xe4) + 0x94));
      iVar3 = *(int *)(iVar1 + 0xdc) * 4 + 0x20;
      *(uint *)(*(int *)(iVar1 + 0xec) + iVar3) =
           uVar4 & 0x1f | *(uint *)(*(int *)(iVar1 + 0xec) + iVar3) & 0xffffffe0;
      FUN_0005b2a4(*(undefined4 *)(iVar1 + 0xe4),iVar1);
      *(undefined1 *)(iVar1 + 0xe0) = 0;
      *(int *)(*(int *)(iVar1 + 0xec) + 0xc08) = 1 << (*(uint *)(iVar1 + 0xdc) & 0xff);
      return;
    }
  }
  thunk_FUN_00002898(s_E__ERROR__Invalid_CU_engine_ID____00047af9 + 3,param_1);
  return;
}

