// rea decompile_all
// name: FUN_00042450
// address: 0x42450
// body: available
// range: 0x42450-0x424c7 inclusive
// range: 0x14c674-0x14c82f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x424c4 to 0x289c thunk_FUN_000028a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00042450(uint param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int local_28 [4];
  
  uVar1 = s_d___ERROR__Invalid_CU_engine_ID__000424c8._0_4_;
  if (param_1 < 2) {
    if (*(int *)(s_d___ERROR__Invalid_CU_engine_ID__000424c8._0_4_ + param_1 * 4) == 0) {
      iVar3 = FUN_001a0808(0x1b8,1);
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = FUN_0014ccc4(iVar3,param_1,param_2,param_3);
      }
      *(int *)(uVar1 + param_1 * 4) = iVar2;
    }
    else {
      iVar2 = *(int *)(s_d___ERROR__Invalid_CU_engine_ID__000424c8._0_4_ + param_1 * 4);
    }
    if (iVar2 != 0) {
      uVar4 = 1 << (*(uint *)(iVar2 + 0xdc) & 0xff);
      iVar3 = *(int *)(iVar2 + 0xec);
      if (param_3 == 1) {
        *(uint *)(iVar3 + 0x10) =
             (uVar4 | *(uint *)(iVar3 + 0x10)) & 3 | *(uint *)(iVar3 + 0x10) & 0xfffffffc;
        FUN_00051b10(*(undefined4 *)(iVar2 + 0xe4),iVar2);
        FUN_0014c52c(iVar2);
        iVar3 = *(int *)(iVar2 + 0xe4);
        piVar10 = (int *)(iVar3 + 0x88);
        local_28[1] = 1;
        local_28[0] = *(int *)(iVar3 + 0x8c) - *piVar10 >> 2;
        piVar5 = local_28;
        if (local_28[0] == 0) {
          piVar5 = local_28 + 1;
        }
        iVar11 = *piVar5;
        puVar6 = (undefined4 *)FUN_0010f82c(iVar11 << 2,0);
        puVar9 = *(undefined4 **)(iVar3 + 0x8c);
        puVar7 = puVar6;
        for (puVar8 = (undefined4 *)*piVar10; puVar8 != puVar9; puVar8 = puVar8 + 1) {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar8;
          }
          puVar7 = puVar7 + 1;
        }
        if ((*(int *)(iVar3 + 0x8c) - *piVar10 >> 2) * 4 >> 2 == 0) {
          FUN_000028a4(DAT_0014c830);
        }
        else {
          uVar4 = FUN_00154ddc(*puVar6);
          iVar3 = *(int *)(iVar2 + 0xdc) * 4 + 0x20;
          *(uint *)(*(int *)(iVar2 + 0xec) + iVar3) =
               uVar4 & 0x1f | *(uint *)(*(int *)(iVar2 + 0xec) + iVar3) & 0xffffffe0;
        }
        *(undefined1 *)(iVar2 + 0xe0) = 1;
        FUN_0016d758(puVar6,iVar11 * 4 >> 2,0);
        return;
      }
      *(uint *)(iVar3 + 0x10) =
           ~uVar4 & 3 & *(uint *)(iVar3 + 0x10) | *(uint *)(iVar3 + 0x10) & 0xfffffffc;
      uVar4 = FUN_00154ddc(*(undefined4 *)(*(int *)(iVar2 + 0xe4) + 0x94));
      iVar3 = *(int *)(iVar2 + 0xdc) * 4 + 0x20;
      *(uint *)(*(int *)(iVar2 + 0xec) + iVar3) =
           uVar4 & 0x1f | *(uint *)(*(int *)(iVar2 + 0xec) + iVar3) & 0xffffffe0;
      FUN_00051bfc(*(undefined4 *)(iVar2 + 0xe4),iVar2);
      *(undefined1 *)(iVar2 + 0xe0) = 0;
      *(int *)(*(int *)(iVar2 + 0xec) + 0xc08) = 1 << (*(uint *)(iVar2 + 0xdc) & 0xff);
      return;
    }
  }
  thunk_FUN_000028a4(s_d___ERROR__Invalid_CU_engine_ID__000424c8 + 4,param_1);
  return;
}

