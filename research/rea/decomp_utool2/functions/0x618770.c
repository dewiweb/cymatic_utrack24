// rea decompile_all
// name: FUN_00618770
// address: 0x618770
// body: available
// range: 0x618770-0x61898e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00618770(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0xffff;
  if (param_1[3] - 5U < 0xffff) {
    uVar6 = param_1[3] - 5U;
  }
  do {
    uVar5 = param_1[0x1d];
    if (uVar5 < 2) {
      FUN_00618990();
      uVar5 = param_1[0x1d];
      if (uVar5 == 0) {
        if (param_2 == 0) {
          return '\0';
        }
        FUN_006147d0(param_1[0x1b] - param_1[0x17],param_2 == 4);
        iVar3 = *param_1;
        param_1[0x17] = param_1[0x1b];
        uVar6 = *(uint *)(*(int *)(iVar3 + 0x1c) + 0x14);
        if (*(uint *)(iVar3 + 0x10) < uVar6) {
          uVar6 = *(uint *)(iVar3 + 0x10);
        }
        if (uVar6 != 0) {
          FUN_004c2c30(*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 0x10),
                       uVar6);
          *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + uVar6;
          piVar1 = (int *)(*(int *)(iVar3 + 0x1c) + 0x10);
          *piVar1 = *piVar1 + uVar6;
          *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + uVar6;
          *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) - uVar6;
          piVar1 = (int *)(*(int *)(iVar3 + 0x1c) + 0x14);
          *piVar1 = *piVar1 - uVar6;
          iVar3 = *(int *)(iVar3 + 0x1c);
          if (*(int *)(iVar3 + 0x14) == 0) {
            *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar3 + 8);
          }
        }
        if (*(int *)(*param_1 + 0x10) != 0) {
          return (param_2 == 4) * '\x02' + '\x01';
        }
        cVar4 = '\0';
        if (param_2 == 4) {
          cVar4 = '\x02';
        }
        return cVar4;
      }
    }
    piVar1 = param_1 + 0x1b;
    *piVar1 = *piVar1 + uVar5;
    uVar2 = param_1[0x1b];
    param_1[0x1d] = 0;
    uVar5 = param_1[0x17] + uVar6;
    if ((*piVar1 == 0) || (uVar5 <= uVar2)) {
      param_1[0x1b] = uVar5;
      param_1[0x1d] = uVar2 - uVar5;
      FUN_006147d0(uVar5 - param_1[0x17],0);
      iVar3 = *param_1;
      param_1[0x17] = param_1[0x1b];
      uVar5 = *(uint *)(*(int *)(iVar3 + 0x1c) + 0x14);
      if (*(uint *)(iVar3 + 0x10) < uVar5) {
        uVar5 = *(uint *)(iVar3 + 0x10);
      }
      if (uVar5 != 0) {
        FUN_004c2c30(*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 0x10),
                     uVar5);
        *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + uVar5;
        piVar1 = (int *)(*(int *)(iVar3 + 0x1c) + 0x10);
        *piVar1 = *piVar1 + uVar5;
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + uVar5;
        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) - uVar5;
        piVar1 = (int *)(*(int *)(iVar3 + 0x1c) + 0x14);
        *piVar1 = *piVar1 - uVar5;
        iVar3 = *(int *)(iVar3 + 0x1c);
        if (*(int *)(iVar3 + 0x14) == 0) {
          *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar3 + 8);
        }
      }
      if (*(int *)(*param_1 + 0x10) == 0) {
        return '\0';
      }
    }
    if (param_1[0xb] - 0x106U <= (uint)(param_1[0x1b] - param_1[0x17])) {
      FUN_006147d0(param_1[0x1b] - param_1[0x17],0);
      iVar3 = *param_1;
      param_1[0x17] = param_1[0x1b];
      uVar5 = *(uint *)(*(int *)(iVar3 + 0x1c) + 0x14);
      if (*(uint *)(iVar3 + 0x10) < uVar5) {
        uVar5 = *(uint *)(iVar3 + 0x10);
      }
      if (uVar5 != 0) {
        FUN_004c2c30(*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 0x10),
                     uVar5);
        *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + uVar5;
        piVar1 = (int *)(*(int *)(iVar3 + 0x1c) + 0x10);
        *piVar1 = *piVar1 + uVar5;
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + uVar5;
        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) - uVar5;
        piVar1 = (int *)(*(int *)(iVar3 + 0x1c) + 0x14);
        *piVar1 = *piVar1 - uVar5;
        iVar3 = *(int *)(iVar3 + 0x1c);
        if (*(int *)(iVar3 + 0x14) == 0) {
          *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar3 + 8);
        }
      }
      if (*(int *)(*param_1 + 0x10) == 0) {
        return '\0';
      }
    }
  } while( true );
}

