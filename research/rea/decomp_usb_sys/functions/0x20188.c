// rea decompile_all
// name: FUN_00020188
// address: 0x20188
// body: available
// range: 0x20188-0x202fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00020188(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  cVar1 = *(char *)(param_1 + 0xb4);
  while (((cVar1 != '\0' && (*(int *)(param_1 + 0xd8) < 6)) &&
         (lVar7 = FUN_0001fadc(param_1 + 0x58), lVar7 != 0))) {
    puVar3 = *(ulonglong **)(lVar7 + 0x30);
    FUN_000264d0(puVar3,0,(ulonglong)*(uint *)(param_1 + 0x6c));
    *(undefined2 *)((longlong)puVar3 + 2) = 10;
    *(undefined2 *)puVar3 = *(undefined2 *)(param_1 + 0x6c);
    uVar11 = 0;
    uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x30) + 0x28);
    *(undefined4 *)(puVar3 + 4) = 7;
    puVar3[3] = uVar4;
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    puVar3[5] = 0;
    *(undefined4 *)((longlong)puVar3 + 0x24) = uVar2;
    iVar10 = 0;
    puVar3[6] = *(ulonglong *)(lVar7 + 0x38);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + (*(uint *)(param_1 + 0x20) >> 3);
    *(uint *)((longlong)puVar3 + 0x84) = *(uint *)(param_1 + 0x20);
    piVar8 = (int *)((longlong)puVar3 + 0x8c);
    if (*(int *)(param_1 + 0x20) != 0) {
      iVar9 = *(int *)(param_1 + 0x60);
      do {
        piVar8[2] = -1;
        *piVar8 = iVar10;
        piVar8[1] = iVar9;
        iVar9 = *(int *)(param_1 + 0x60);
        uVar11 = uVar11 + 1;
        piVar8 = piVar8 + 3;
        iVar10 = iVar10 + iVar9;
      } while (uVar11 < *(uint *)(param_1 + 0x20));
    }
    lVar5 = *(longlong *)(lVar7 + 0x40);
    IoReuseIrp(lVar5);
    lVar6 = *(longlong *)(lVar5 + 0xb8);
    FUN_000264d0((ulonglong *)(lVar6 + -0x48),0,0x48);
    *(undefined1 *)(lVar6 + -0x48) = 0xf;
    *(undefined4 *)(lVar6 + -0x30) = 0x220003;
    *(ulonglong **)(lVar6 + -0x40) = puVar3;
    lVar5 = *(longlong *)(lVar5 + 0xb8);
    *(undefined1 **)(lVar5 + -0x10) = &LAB_0001ff30;
    *(longlong *)(lVar5 + -8) = lVar7;
    *(undefined1 *)(lVar5 + -0x45) = 0xe0;
    *(longlong *)(lVar7 + 0x48) = param_1;
    LOCK();
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
    UNLOCK();
    IofCallDriver(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x68));
    cVar1 = *(char *)(param_1 + 0xb4);
  }
  return;
}

