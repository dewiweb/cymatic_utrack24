// rea decompile_all
// name: FUN_00613780
// address: 0x613780
// body: available
// range: 0x613780-0x613902 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00613817) */

void FUN_00613780(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  longlong lVar6;
  void *local_34;
  undefined4 local_30;
  void *local_2c;
  int *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071cbfe;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_24 = (int *)0x0;
  local_8 = 0;
  piVar2 = *(int **)(in_ECX + 0x24);
  if ((*(int *)(in_ECX + 0x2c) == 0) ||
     (piVar2 = (int *)FUN_006358c0(DAT_00c76070 ^ (uint)&stack0xfffffffc), local_24 = piVar2,
     piVar2 != (int *)0x0)) {
    piVar1 = local_24;
    if (piVar2 != (int *)0x0) {
      local_14 = 0;
      iVar3 = FUN_006139f0();
      local_20 = iVar3;
      if (-1 < iVar3) {
        local_18 = iVar3 >> 0x1f;
        local_1c = iVar3;
        lVar6 = (**(code **)(*piVar2 + 4))();
        if (CONCAT44(local_18,iVar3) < lVar6) {
          iVar3 = (**(code **)(*piVar2 + 4))();
          iVar3 = iVar3 - local_20;
          local_20 = iVar3;
          (**(code **)(*piVar2 + 0x58))(local_1c,local_18);
          local_34 = (void *)0x0;
          local_30 = 0;
          local_8 = CONCAT31(local_8._1_3_,1);
          iVar4 = (**(code **)(*piVar2 + 0x50))(&local_34,iVar3);
          if (iVar4 == iVar3) {
            iVar4 = 0;
            local_1c = 0;
            if (0 < local_14) {
              do {
                if (iVar3 < iVar4 + 0x2e) break;
                local_18 = (uint)*(ushort *)((int)local_34 + iVar4 + 0x1c);
                iVar3 = (int)local_34 + iVar4;
                if (local_20 < (int)(local_18 + 0x2e + iVar4)) break;
                local_2c = operator_new(0x30);
                local_8._0_1_ = 2;
                uVar5 = FUN_004563a0(iVar3,local_18);
                local_8 = CONCAT31(local_8._1_3_,1);
                FUN_004111b0(uVar5);
                iVar4 = iVar4 + *(ushort *)(iVar3 + 0x1e) + 0x2e +
                                *(ushort *)(iVar3 + 0x20) + local_18;
                local_1c = local_1c + 1;
                iVar3 = local_20;
              } while (local_1c < local_14);
            }
          }
          FID_conflict__free(local_34);
        }
      }
    }
    if (piVar1 != (int *)0x0) {
      (**(code **)*piVar1)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

