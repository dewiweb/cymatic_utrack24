// rea decompile_all
// name: FUN_00016f90
// address: 0x16f90
// body: available
// range: 0x16f90-0x170ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00016f90(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong local_res8;
  
  lVar4 = KeQueryPerformanceCounter(&local_res8);
  lVar5 = (lVar4 * 10000000) / local_res8;
  lVar4 = lVar5 - param_1[0x36];
  if (0 < lVar4) {
    uVar6 = 0;
    lVar4 = (ulonglong)*(uint *)(param_1[3] + 0x28) * lVar4;
    lVar4 = lVar4 + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar4),8);
    iVar2 = (int)(lVar4 >> 0x17);
    iVar3 = (int)(lVar4 >> 0x3f);
    if (iVar2 != iVar3) {
      plVar1 = param_1 + 0xc;
      do {
        if ((*plVar1 != 0) || (lVar4 = KsPinGetLeadingEdgeStreamPointer(param_1[7]), lVar4 == 0))
        break;
        *plVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x28);
        if (*(int *)((longlong)param_1 + 0x84) == 1) {
          *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(*(longlong *)(lVar4 + 0x10) + 0x20);
        }
        else {
          *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(*(longlong *)(lVar4 + 0x10) + 0x24);
        }
        param_1[0xe] = lVar4;
        if ((char)param_1[10] != '\0') {
          FUN_0001cf40((ulonglong *)*plVar1,0,(ulonglong)*(uint *)(param_1 + 0xd));
        }
        if (plVar1 == (longlong *)0x0) break;
        uVar6 = uVar6 + *(uint *)(param_1 + 0xd) / *(uint *)(param_1 + 0x12);
        if (*(int *)((longlong)param_1 + 0x84) == 1) {
          FUN_0001cf40((ulonglong *)*plVar1,0,(ulonglong)*(uint *)(param_1 + 0xd));
        }
        (**(code **)(*param_1 + 0x10))(param_1);
      } while (uVar6 < (uint)(iVar2 - iVar3));
    }
    if (*(uint *)(param_1[3] + 0x28) == 0) {
      param_1[0x36] = lVar5;
    }
    else {
      param_1[0x36] =
           param_1[0x36] + ((ulonglong)uVar6 * 10000000) / (ulonglong)*(uint *)(param_1[3] + 0x28);
    }
    param_1[0x38] = param_1[0x38] + (ulonglong)uVar6;
  }
  return;
}

