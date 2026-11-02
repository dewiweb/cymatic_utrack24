// rea decompile_all
// name: FUN_00012ec0
// address: 0x12ec0
// body: available
// range: 0x12ec0-0x12fc9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00012ec0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  code *pcVar6;
  longlong *plVar7;
  
  lVar3 = *(longlong *)(param_2 + 0xb8);
  cVar4 = *(char *)(lVar3 + 1);
  if (cVar4 != '\0') {
    if (cVar4 == '\x02') {
      if (*(int *)(lVar3 + 0x10) == 0) {
        uVar5 = FUN_00012dc8((longlong)param_1,param_2,*(uint *)(lVar3 + 0x18));
        return uVar5;
      }
      if (*(int *)(lVar3 + 0x10) == 1) {
        iVar2 = *(int *)(lVar3 + 0x18);
        if (iVar2 == 1) {
          pcVar6 = FUN_00012cc4;
          plVar7 = param_1;
          goto LAB_00012f91;
        }
        (**(code **)(*param_1 + 0xa8))(param_1,iVar2);
        *(int *)(param_1 + 4) = iVar2;
        PoSetPowerState(param_1[0xe],1);
      }
    }
    else if ((cVar4 == '\x03') && (*(int *)(lVar3 + 0x10) == 0)) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 != 1) {
        if (uVar1 < 7) {
          uVar5 = *(undefined4 *)((longlong)param_1 + (longlong)(int)uVar1 * 4 + 0x34);
        }
        else {
          uVar5 = 4;
        }
        cVar4 = (**(code **)(*param_1 + 0xb0))(param_1,uVar5);
        if (cVar4 == '\0') {
          PoStartNextPowerIrp(param_2);
          *(undefined4 *)(param_2 + 0x30) = 0xc0000001;
          IofCompleteRequest(param_2,0);
          return 0xc0000001;
        }
      }
    }
  }
  pcVar6 = (code *)0x0;
  plVar7 = (longlong *)0x0;
LAB_00012f91:
  uVar5 = FUN_00012d28((longlong)param_1,param_2,(longlong)pcVar6,plVar7);
  return uVar5;
}

